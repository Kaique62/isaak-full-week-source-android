// Generated by Haxe 4.2.2
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_ui_VirtualInputData
#include <ui/VirtualInputData.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5b0cc44679ea8291_112_new,"ui.VirtualInputData","new",0x6ea88db5,"ui.VirtualInputData.new","lime/_internal/macros/AssetsMacro.hx",112,0xc651f030)
HX_LOCAL_STACK_FRAME(_hx_pos_e9b7e4827646f527_25_boot,"ui.VirtualInputData","boot",0x5cec713d,"ui.VirtualInputData.boot","ui/FlxVirtualPad.hx",25,0x1a6cc55f)
namespace ui{

void VirtualInputData_obj::__construct( ::Dynamic __o_length){
            		 ::Dynamic length = __o_length;
            		if (::hx::IsNull(__o_length)) length = 0;
            	HX_STACKFRAME(&_hx_pos_5b0cc44679ea8291_112_new)
HXLINE( 113)		super::__construct(null());
HXLINE( 115)		 ::haxe::io::Bytes bytes = ::haxe::Resource_obj::getBytes(::ui::VirtualInputData_obj::resourceName);
HXLINE( 116)		this->_hx___fromBytes(bytes);
            	}

Dynamic VirtualInputData_obj::__CreateEmpty() { return new VirtualInputData_obj; }

void *VirtualInputData_obj::_hx_vtable = 0;

Dynamic VirtualInputData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VirtualInputData_obj > _hx_result = new VirtualInputData_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool VirtualInputData_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x195c64b7) {
		if (inClassId<=(int)0x12ff8ebe) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x12ff8ebe;
		} else {
			return inClassId==(int)0x195c64b7;
		}
	} else {
		return inClassId==(int)0x6c29e8bd;
	}
}

::String VirtualInputData_obj::resourceName;


::hx::ObjectPtr< VirtualInputData_obj > VirtualInputData_obj::__new( ::Dynamic __o_length) {
	::hx::ObjectPtr< VirtualInputData_obj > __this = new VirtualInputData_obj();
	__this->__construct(__o_length);
	return __this;
}

::hx::ObjectPtr< VirtualInputData_obj > VirtualInputData_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic __o_length) {
	VirtualInputData_obj *__this = (VirtualInputData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VirtualInputData_obj), true, "ui.VirtualInputData"));
	*(void **)__this = VirtualInputData_obj::_hx_vtable;
	__this->__construct(__o_length);
	return __this;
}

VirtualInputData_obj::VirtualInputData_obj()
{
}

bool VirtualInputData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool VirtualInputData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *VirtualInputData_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo VirtualInputData_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &VirtualInputData_obj::resourceName,HX_("resourceName",39,7a,62,90)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void VirtualInputData_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VirtualInputData_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void VirtualInputData_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VirtualInputData_obj::resourceName,"resourceName");
};

#endif

::hx::Class VirtualInputData_obj::__mClass;

static ::String VirtualInputData_obj_sStaticFields[] = {
	HX_("resourceName",39,7a,62,90),
	::String(null())
};

void VirtualInputData_obj::__register()
{
	VirtualInputData_obj _hx_dummy;
	VirtualInputData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ui.VirtualInputData",43,8f,20,5f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &VirtualInputData_obj::__GetStatic;
	__mClass->mSetStaticField = &VirtualInputData_obj::__SetStatic;
	__mClass->mMarkFunc = VirtualInputData_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(VirtualInputData_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< VirtualInputData_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = VirtualInputData_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VirtualInputData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VirtualInputData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void VirtualInputData_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e9b7e4827646f527_25_boot)
HXDLIN(  25)		resourceName = HX_("__ASSET__:file_ui_VirtualInputData",5b,f7,43,73);
            	}
}

} // end namespace ui
