// Generated by Haxe 4.2.2
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_android__FlxAndroidKey_FlxAndroidKey_Impl_
#include <flixel/input/android/_FlxAndroidKey/FlxAndroidKey_Impl_.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_37f2223600af1802_21_fromString,"flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_","fromString",0xb5388f3d,"flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_.fromString","flixel/input/android/FlxAndroidKey.hx",21,0xd13214f4)
HX_LOCAL_STACK_FRAME(_hx_pos_37f2223600af1802_29_toString,"flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_","toString",0x27c6b58e,"flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_.toString","flixel/input/android/FlxAndroidKey.hx",29,0xd13214f4)
HX_LOCAL_STACK_FRAME(_hx_pos_a80973861bd47df6_54_boot,"flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_","boot",0x12e2d014,"flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_.boot","flixel/system/macros/FlxMacroUtil.hx",54,0x8cc0f087)
HX_LOCAL_STACK_FRAME(_hx_pos_37f2223600af1802_14_boot,"flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_","boot",0x12e2d014,"flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_.boot","flixel/input/android/FlxAndroidKey.hx",14,0xd13214f4)
HX_LOCAL_STACK_FRAME(_hx_pos_37f2223600af1802_15_boot,"flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_","boot",0x12e2d014,"flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_.boot","flixel/input/android/FlxAndroidKey.hx",15,0xd13214f4)
HX_LOCAL_STACK_FRAME(_hx_pos_37f2223600af1802_16_boot,"flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_","boot",0x12e2d014,"flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_.boot","flixel/input/android/FlxAndroidKey.hx",16,0xd13214f4)
HX_LOCAL_STACK_FRAME(_hx_pos_37f2223600af1802_17_boot,"flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_","boot",0x12e2d014,"flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_.boot","flixel/input/android/FlxAndroidKey.hx",17,0xd13214f4)
namespace flixel{
namespace input{
namespace android{
namespace _FlxAndroidKey{

void FlxAndroidKey_Impl__obj::__construct() { }

Dynamic FlxAndroidKey_Impl__obj::__CreateEmpty() { return new FlxAndroidKey_Impl__obj; }

void *FlxAndroidKey_Impl__obj::_hx_vtable = 0;

Dynamic FlxAndroidKey_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxAndroidKey_Impl__obj > _hx_result = new FlxAndroidKey_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxAndroidKey_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x55650f16;
}

 ::haxe::ds::StringMap FlxAndroidKey_Impl__obj::fromStringMap;

 ::haxe::ds::IntMap FlxAndroidKey_Impl__obj::toStringMap;

int FlxAndroidKey_Impl__obj::ANY;

int FlxAndroidKey_Impl__obj::NONE;

int FlxAndroidKey_Impl__obj::MENU;

int FlxAndroidKey_Impl__obj::BACK;

int FlxAndroidKey_Impl__obj::fromString(::String s){
            	HX_STACKFRAME(&_hx_pos_37f2223600af1802_21_fromString)
HXLINE(  22)		s = s.toUpperCase();
HXLINE(  23)		if (::flixel::input::android::_FlxAndroidKey::FlxAndroidKey_Impl__obj::fromStringMap->exists(s)) {
HXLINE(  23)			return ::flixel::input::android::_FlxAndroidKey::FlxAndroidKey_Impl__obj::fromStringMap->get_int(s);
            		}
            		else {
HXLINE(  23)			return -1;
            		}
HXDLIN(  23)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAndroidKey_Impl__obj,fromString,return )

::String FlxAndroidKey_Impl__obj::toString(int this1){
            	HX_STACKFRAME(&_hx_pos_37f2223600af1802_29_toString)
HXDLIN(  29)		return ::flixel::input::android::_FlxAndroidKey::FlxAndroidKey_Impl__obj::toStringMap->get_string(this1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAndroidKey_Impl__obj,toString,return )


FlxAndroidKey_Impl__obj::FlxAndroidKey_Impl__obj()
{
}

bool FlxAndroidKey_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxAndroidKey_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FlxAndroidKey_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &FlxAndroidKey_Impl__obj::fromStringMap,HX_("fromStringMap",81,6f,a2,3b)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &FlxAndroidKey_Impl__obj::toStringMap,HX_("toStringMap",50,a5,9e,2e)},
	{::hx::fsInt,(void *) &FlxAndroidKey_Impl__obj::ANY,HX_("ANY",cc,96,31,00)},
	{::hx::fsInt,(void *) &FlxAndroidKey_Impl__obj::NONE,HX_("NONE",b8,da,ca,33)},
	{::hx::fsInt,(void *) &FlxAndroidKey_Impl__obj::MENU,HX_("MENU",9f,0d,1a,33)},
	{::hx::fsInt,(void *) &FlxAndroidKey_Impl__obj::BACK,HX_("BACK",27,a2,d1,2b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FlxAndroidKey_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAndroidKey_Impl__obj::fromStringMap,"fromStringMap");
	HX_MARK_MEMBER_NAME(FlxAndroidKey_Impl__obj::toStringMap,"toStringMap");
	HX_MARK_MEMBER_NAME(FlxAndroidKey_Impl__obj::ANY,"ANY");
	HX_MARK_MEMBER_NAME(FlxAndroidKey_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(FlxAndroidKey_Impl__obj::MENU,"MENU");
	HX_MARK_MEMBER_NAME(FlxAndroidKey_Impl__obj::BACK,"BACK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxAndroidKey_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAndroidKey_Impl__obj::fromStringMap,"fromStringMap");
	HX_VISIT_MEMBER_NAME(FlxAndroidKey_Impl__obj::toStringMap,"toStringMap");
	HX_VISIT_MEMBER_NAME(FlxAndroidKey_Impl__obj::ANY,"ANY");
	HX_VISIT_MEMBER_NAME(FlxAndroidKey_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(FlxAndroidKey_Impl__obj::MENU,"MENU");
	HX_VISIT_MEMBER_NAME(FlxAndroidKey_Impl__obj::BACK,"BACK");
};

#endif

::hx::Class FlxAndroidKey_Impl__obj::__mClass;

static ::String FlxAndroidKey_Impl__obj_sStaticFields[] = {
	HX_("fromStringMap",81,6f,a2,3b),
	HX_("toStringMap",50,a5,9e,2e),
	HX_("ANY",cc,96,31,00),
	HX_("NONE",b8,da,ca,33),
	HX_("MENU",9f,0d,1a,33),
	HX_("BACK",27,a2,d1,2b),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void FlxAndroidKey_Impl__obj::__register()
{
	FlxAndroidKey_Impl__obj _hx_dummy;
	FlxAndroidKey_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_",cc,9f,54,a9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxAndroidKey_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxAndroidKey_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxAndroidKey_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxAndroidKey_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxAndroidKey_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAndroidKey_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAndroidKey_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxAndroidKey_Impl__obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::haxe::ds::StringMap _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_a80973861bd47df6_54_boot)
HXDLIN(  54)			 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN(  54)			_g->set(HX_("ANY",cc,96,31,00),-2);
HXDLIN(  54)			_g->set(HX_("MENU",9f,0d,1a,33),(int)1073742092);
HXDLIN(  54)			_g->set(HX_("BACK",27,a2,d1,2b),(int)1073742094);
HXDLIN(  54)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_a80973861bd47df6_54_boot)
HXDLIN(  54)		fromStringMap = ( ( ::haxe::ds::StringMap)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::haxe::ds::IntMap _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_a80973861bd47df6_54_boot)
HXDLIN(  54)			 ::haxe::ds::IntMap _g =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXDLIN(  54)			_g->set(-2,HX_("ANY",cc,96,31,00));
HXDLIN(  54)			_g->set((int)1073742092,HX_("MENU",9f,0d,1a,33));
HXDLIN(  54)			_g->set((int)1073742094,HX_("BACK",27,a2,d1,2b));
HXDLIN(  54)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_a80973861bd47df6_54_boot)
HXDLIN(  54)		toStringMap = ( ( ::haxe::ds::IntMap)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            	HX_STACKFRAME(&_hx_pos_37f2223600af1802_14_boot)
HXDLIN(  14)		ANY = -2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_37f2223600af1802_15_boot)
HXDLIN(  15)		NONE = -1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_37f2223600af1802_16_boot)
HXDLIN(  16)		MENU = (int)1073742092;
            	}
{
            	HX_STACKFRAME(&_hx_pos_37f2223600af1802_17_boot)
HXDLIN(  17)		BACK = (int)1073742094;
            	}
}

} // end namespace flixel
} // end namespace input
} // end namespace android
} // end namespace _FlxAndroidKey
