// Generated by Haxe 4.2.2
#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif

namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


static ::String IHasParams_obj_sMemberFields[] = {
	HX_("params",46,fb,7a,ed),
	HX_("set_params",83,09,80,e1),
	::String(null()) };

::hx::Class IHasParams_obj::__mClass;

void IHasParams_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.interfaces.IHasParams",3a,3b,ce,8b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IHasParams_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x9e5db374 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces
