// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Nodes/1.9.0/Visual.BeginRemove.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct PendingRemoveVisual;}}

namespace g{
namespace Fuse{

// public abstract interface IBeginRemoveVisualListener :56
// {
uInterfaceType* IBeginRemoveVisualListener_typeof();

struct IBeginRemoveVisualListener
{
    void(*fp_OnBeginRemoveVisual)(uObject*, ::g::Fuse::PendingRemoveVisual*);
    static void OnBeginRemoveVisual(const uInterface& __this, ::g::Fuse::PendingRemoveVisual* pr) { __this.VTable<IBeginRemoveVisualListener>()->fp_OnBeginRemoveVisual(__this, pr); }
};
// }

}} // ::g::Fuse
