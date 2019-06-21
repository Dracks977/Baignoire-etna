//
// Created by eclat on 20/04/2019.
//

#ifndef IOBSERVER_HH_
# define IOBSERVER_HH_
#include "IObservable.hh"

class IObservable;
class IObserver {
	public:
		IObserver();
		virtual ~IObserver() = 0;
        virtual void Notify(IObservable*) {};

	protected:
	private:
};

#endif /* !IOBSERVER_HH_ */
