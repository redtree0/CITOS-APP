// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Common/1.9.0/UpdateManager.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// public abstract interface IUpdateListener :39
// {
uInterfaceType* IUpdateListener_typeof();

struct IUpdateListener
{
    void(*fp_Update)(uObject*);
    static void Update(const uInterface& __this) { __this.VTable<IUpdateListener>()->fp_Update(__this); }
};
// }

}} // ::g::Fuse
