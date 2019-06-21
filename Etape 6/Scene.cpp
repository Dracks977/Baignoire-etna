//
// Created by eclat on 15/04/2019.
//
#include "Scene.hh"

Scene::Scene()
{
}

Scene::~Scene()
{
}

std::list<AbstractEntity *> Scene::GetEntities() const
{
    return entities;
}

void Scene::AddEntity(AbstractEntity *entity)
{
    entities.push_back(entity);
}

void Scene::RemoveEntity(AbstractEntity *entity)
{
    std::list<AbstractEntity*>::iterator i = entities.begin();
    while (i != entities.end())
    {
        if ((*i) == entity)
        {
            entities.erase(i++);
        }
        else
        {
            ++i;
        }
    }
}

void Scene::Update()
{
    TimeManager::GetInstance().Update();
    for (AbstractEntity *entity : entities){
        entity->Update();
    }
    for (AbstractEntity *entity : entities){
        entity->Draw();
    }
}