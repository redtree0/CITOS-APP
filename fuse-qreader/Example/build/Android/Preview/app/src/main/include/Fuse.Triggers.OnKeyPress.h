// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Triggers/1.9.0/OnKeyPress.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-d3bd6f2e.h>
#include <Fuse.Animations.IUnwr-594abe9.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Input{struct KeyEventArgs;}}}
namespace g{namespace Fuse{namespace Triggers{struct OnKeyPress;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public class OnKeyPress :31
// {
::g::Fuse::Triggers::Trigger_type* OnKeyPress_typeof();
void OnKeyPress__ctor_5_fn(OnKeyPress* __this);
void OnKeyPress__add_Handler_fn(OnKeyPress* __this, uDelegate* value);
void OnKeyPress__remove_Handler_fn(OnKeyPress* __this, uDelegate* value);
void OnKeyPress__get_Key_fn(OnKeyPress* __this, int32_t* __retval);
void OnKeyPress__set_Key_fn(OnKeyPress* __this, int32_t* value);
void OnKeyPress__New2_fn(OnKeyPress** __retval);
void OnKeyPress__OnKeyPressed_fn(OnKeyPress* __this, uObject* sender, ::g::Fuse::Input::KeyEventArgs* args);
void OnKeyPress__OnRooted_fn(OnKeyPress* __this);
void OnKeyPress__OnUnrooted_fn(OnKeyPress* __this);

struct OnKeyPress : ::g::Fuse::Triggers::Trigger
{
    int32_t _Key;
    uStrong<uDelegate*> Handler1;

    void ctor_5();
    void add_Handler(uDelegate* value);
    void remove_Handler(uDelegate* value);
    int32_t Key();
    void Key(int32_t value);
    void OnKeyPressed(uObject* sender, ::g::Fuse::Input::KeyEventArgs* args);
    static OnKeyPress* New2();
};
// }

}}} // ::g::Fuse::Triggers
