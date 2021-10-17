// Generated by Haxe 4.2.2
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_android_FlxAndroidKeyList
#include <flixel/input/android/FlxAndroidKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_android_FlxAndroidKeys
#include <flixel/input/android/FlxAndroidKeys.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_81f97bcffd617151_11_new,"flixel.input.android.FlxAndroidKeys","new",0x7d1b2d18,"flixel.input.android.FlxAndroidKeys.new","flixel/input/android/FlxAndroidKeys.hx",11,0x680fe935)
HX_DEFINE_STACK_FRAME(_hx_pos_81f97bcffd617151_10_new,"flixel.input.android.FlxAndroidKeys","new",0x7d1b2d18,"flixel.input.android.FlxAndroidKeys.new","flixel/input/android/FlxAndroidKeys.hx",10,0x680fe935)
namespace flixel{
namespace input{
namespace android{

void FlxAndroidKeys_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		 ::flixel::input::android::FlxAndroidKeyList _hx_run(int status, ::flixel::input::FlxKeyManager keyManager){
            			HX_GC_STACKFRAME(&_hx_pos_81f97bcffd617151_11_new)
HXLINE(  11)			return  ::flixel::input::android::FlxAndroidKeyList_obj::__alloc( HX_CTX ,status,keyManager);
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_GC_STACKFRAME(&_hx_pos_81f97bcffd617151_10_new)
HXLINE(  11)		super::__construct( ::Dynamic(new _hx_Closure_0()));
HXLINE(  14)		 ::flixel::input::FlxInput back =  ::flixel::input::FlxInput_obj::__alloc( HX_CTX ,(int)1073742094);
HXLINE(  15)		this->_keyListArray->push(back);
HXLINE(  16)		this->_keyListMap->set(( (int)(back->ID) ),back);
HXLINE(  19)		 ::flixel::input::FlxInput menu =  ::flixel::input::FlxInput_obj::__alloc( HX_CTX ,(int)1073742092);
HXLINE(  20)		this->_keyListArray->push(menu);
HXLINE(  21)		this->_keyListMap->set(( (int)(menu->ID) ),menu);
            	}

Dynamic FlxAndroidKeys_obj::__CreateEmpty() { return new FlxAndroidKeys_obj; }

void *FlxAndroidKeys_obj::_hx_vtable = 0;

Dynamic FlxAndroidKeys_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxAndroidKeys_obj > _hx_result = new FlxAndroidKeys_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxAndroidKeys_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x11e4ce1a) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x11e4ce1a;
	} else {
		return inClassId==(int)0x5fcf46d2;
	}
}


::hx::ObjectPtr< FlxAndroidKeys_obj > FlxAndroidKeys_obj::__new() {
	::hx::ObjectPtr< FlxAndroidKeys_obj > __this = new FlxAndroidKeys_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxAndroidKeys_obj > FlxAndroidKeys_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxAndroidKeys_obj *__this = (FlxAndroidKeys_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxAndroidKeys_obj), true, "flixel.input.android.FlxAndroidKeys"));
	*(void **)__this = FlxAndroidKeys_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxAndroidKeys_obj::FlxAndroidKeys_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxAndroidKeys_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxAndroidKeys_obj_sStaticStorageInfo = 0;
#endif

::hx::Class FlxAndroidKeys_obj::__mClass;

void FlxAndroidKeys_obj::__register()
{
	FlxAndroidKeys_obj _hx_dummy;
	FlxAndroidKeys_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.android.FlxAndroidKeys",26,01,11,3a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FlxAndroidKeys_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxAndroidKeys_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxAndroidKeys_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace android
