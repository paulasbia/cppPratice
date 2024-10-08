#include <iostream>
#include <memory>

using namespace std;

class Component
{
public:
    virtual void run() = 0;
    virtual ~Component() = default;
};

class ConcreteComponentA: public Component
{
public:
    virtual void run() override
    {
        cout << "Executing ConcreteComponentA::run()" << endl;
    }
};

class ConcreteComponentB: public Component
{
public:
    virtual void run() override
    {
        cout << "Executing ConcreteComponentB::run()" << endl;
    }
};

// Incompatible class
class LegacyComponent
{
public:
    void go()
    {
        cout << "Executing LegacyComponent::go()" << endl;
    }    
};

//Only Component, we need the private member to be LegacyComponent
// class LegacyClassAdapter: public Component
// {
// public:
//     LegacyClassAdapter() : m_adaptee(make_unique<LegacyComponent>()) {}
//    //LegacyClassAdapter() {}

//     virtual void run() override
//     {
//         cout << "LegacyAdapter::run() -> calling LegacyComponent::go()" << endl;
//        m_adaptee->go();
//     }

//     private:
//         unique_ptr<LegacyComponent> m_adaptee;
// };

//With LegacyComponent, we don't need the private member to be LegacyComponent
class LegacyClassAdapter: public Component, private LegacyComponent
{
public:
   // LegacyClassAdapter() : m_adaptee(make_unique<LegacyComponent>()) {}
   LegacyClassAdapter() {}

    virtual void run() override
    {
        cout << "LegacyAdapter::run() -> calling LegacyComponent::go()" << endl;
       // m_adaptee->go();
       go();
    }

// private:
//     unique_ptr<LegacyComponent> m_adaptee;
};

int main()
{    
    const unique_ptr<Component> components[]
    {
        make_unique<ConcreteComponentA>(),
        make_unique<ConcreteComponentB>(),
        // The next line will trigger a compiler error (no viable conversion from 'unique_ptr<LegacyComponent>' to 'const unique_ptr<Component>')
       // make_unique<LegacyComponent>() 
        make_unique<LegacyClassAdapter>()
    };
    
    for (const auto& component : components)
    {
        component->run();
    }
    return 0;
}