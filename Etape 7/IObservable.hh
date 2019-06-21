//
// Created by eclat on 20/04/2019.
//

#ifndef IOBSERVABLE_HH_
# define IOBSERVABLE_HH_
#include <list>
#include "IObserver.hh"

class IObserver;
class IObservable 
{
	public:
		IObservable();
		virtual ~IObservable() = 0;
		virtual void AddObserver(IObserver*) {};
		virtual void RemoveObserver(IObserver*) {};

	protected:
        std::list<IObserver*> observers;
	private:
};

#endif /* !IOBSERVABLE_HH_ */
