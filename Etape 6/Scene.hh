//
// Created by eclat on 15/04/2019.
//

#ifndef SCENE_HH_
# define SCENE_HH_
#include <list>
#include "AbstractEntity.hh"
#include "TimeManager.hh"

class Scene {
	public:
		Scene();
		~Scene();
        std::list<AbstractEntity*> GetEntities() const;
        void AddEntity(AbstractEntity*);
        void RemoveEntity(AbstractEntity*);
        void Update();

	protected:
	private:
        std::list<AbstractEntity*> entities;
};

#endif /* !SCENE_HH_ */
