// This file was generated based on C:/Users/채재윤융합IT학부/AppData/Local/Fusetools/Packages/Fuse.Navigation/1.9.0/ModifyRouteCommand.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.VarArgFunction.h>
namespace g{namespace Fuse{namespace Navigation{struct RouteModificationCommand;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterRequest;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public abstract class RouteModificationCommand :8
// {
struct RouteModificationCommand_type : ::g::Fuse::Reactive::Expression_type
{
    void(*fp_ProcessArguments)(::g::Fuse::Navigation::RouteModificationCommand*, ::g::Fuse::Navigation::RouterRequest*, uArray*, bool*);
};

RouteModificationCommand_type* RouteModificationCommand_typeof();
void RouteModificationCommand__Subscribe_fn(RouteModificationCommand* __this, uObject* context, uObject* listener, uObject** __retval);

struct RouteModificationCommand : ::g::Fuse::Reactive::VarArgFunction
{
    bool ProcessArguments(::g::Fuse::Navigation::RouterRequest* request, uArray* args) { bool __retval; return (((RouteModificationCommand_type*)__type)->fp_ProcessArguments)(this, request, args, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Navigation
