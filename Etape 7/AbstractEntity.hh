//
// Created by eclat on 20/04/2019.
//

#ifndef ABSTRACTENTITY_HH_
#define ABSTRACTENTITY_HH_

class AbstractEntity
{
  public:
	virtual ~AbstractEntity();
	virtual void Draw();
	virtual void Update();

  protected:
	AbstractEntity();

  private:
};

#endif /* !ABSTRACTENTITY_HH_ */
