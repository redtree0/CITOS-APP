// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Nodes/1.9.0/Node.DataContext.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// public abstract interface Node.IDataListener :175
// {
uInterfaceType* Node__IDataListener_typeof();

struct Node__IDataListener
{
    void(*fp_OnDataChanged)(uObject*);
    static void OnDataChanged(const uInterface& __this) { __this.VTable<Node__IDataListener>()->fp_OnDataChanged(__this); }
};
// }

}} // ::g::Fuse
