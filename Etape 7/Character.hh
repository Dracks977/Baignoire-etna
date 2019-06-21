//
// Created by eclat on 20/04/2019.
//

#ifndef CHARACTER_HH_
#define CHARACTER_HH_

#include "AbstractEntity.hh"
#include "IObservable.hh"

class Character : public AbstractEntity, public IObservable, public IObserver
{
	public:
		virtual ~Character();
		double GetX() const;
		void SetX(double);
		double GetY() const;
		void SetY(double);
		int GetLife() const;
		void SetLife(int);

	protected:
		Character();

	private:
		void NotifyObservers();
		
	private:
		double x;
		double y;
		int life;
};

#endif /* !CHARACTER_HH_ */
