﻿using System.Collections.Generic;
using System.Linq;
using UnityEngine;

// ReSharper disable once CheckNamespace
public class PlayerEventUpdater : MonoBehaviour, IContainer
{
    public Player_Data PlayerData;
    public List<Item> gems = new List<Item>();
    public GameEventArgs ItemAddedToInventory;
    public GameEventArgs ItemRemovedFromInventory;
    public GameEventArgs ItemSwappedAroundInInventory;

    public void AddToInventory(Item gem)
    {
        Debug.Log("gem added");
        gems.Add(gem);
        PlayerData.hp += gem.value;
    }

    public void RemoveFromInventory(Item gem)
    {
        throw new System.NotImplementedException();
    }
}
