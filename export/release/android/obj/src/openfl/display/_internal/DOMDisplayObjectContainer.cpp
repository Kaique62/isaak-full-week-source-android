// Generated by Haxe 4.2.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_DOMRenderer
#include <openfl/display/DOMRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DOMDisplayObject
#include <openfl/display/_internal/DOMDisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DOMDisplayObjectContainer
#include <openfl/display/_internal/DOMDisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_8d5a21e4727bbbb1_8_renderDrawable,"openfl.display._internal.DOMDisplayObjectContainer","renderDrawable",0x78f8d07c,"openfl.display._internal.DOMDisplayObjectContainer.renderDrawable","openfl/display/_internal/DOMDisplayObjectContainer.hx",8,0x52e3047b)
HX_LOCAL_STACK_FRAME(_hx_pos_8d5a21e4727bbbb1_47_renderDrawableClear,"openfl.display._internal.DOMDisplayObjectContainer","renderDrawableClear",0xaedecf71,"openfl.display._internal.DOMDisplayObjectContainer.renderDrawableClear","openfl/display/_internal/DOMDisplayObjectContainer.hx",47,0x52e3047b)
namespace openfl{
namespace display{
namespace _internal{

void DOMDisplayObjectContainer_obj::__construct() { }

Dynamic DOMDisplayObjectContainer_obj::__CreateEmpty() { return new DOMDisplayObjectContainer_obj; }

void *DOMDisplayObjectContainer_obj::_hx_vtable = 0;

Dynamic DOMDisplayObjectContainer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DOMDisplayObjectContainer_obj > _hx_result = new DOMDisplayObjectContainer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DOMDisplayObjectContainer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4d0dc1f8;
}

void DOMDisplayObjectContainer_obj::renderDrawable( ::openfl::display::DisplayObjectContainer displayObjectContainer, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_8d5a21e4727bbbb1_8_renderDrawable)
HXLINE(   9)		{
HXLINE(   9)			 ::Dynamic orphan = displayObjectContainer->_hx___removedChildren->iterator();
HXDLIN(   9)			while(( (bool)(orphan->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(   9)				 ::openfl::display::DisplayObject orphan1 = ( ( ::openfl::display::DisplayObject)(orphan->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  11)				if (::hx::IsNull( orphan1->stage )) {
HXLINE(  13)					renderer->_hx___renderDrawable(orphan1);
            				}
            			}
            		}
HXLINE(  17)		{
HXLINE(  17)			{
HXLINE(  17)				 ::Dynamic orphan1 = displayObjectContainer->_hx___removedChildren->iterator();
HXDLIN(  17)				while(( (bool)(orphan1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  17)					 ::openfl::display::DisplayObject orphan = ( ( ::openfl::display::DisplayObject)(orphan1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  17)					if (::hx::IsNull( orphan->stage )) {
HXLINE(  17)						orphan->_hx___cleanup();
            					}
            				}
            			}
HXDLIN(  17)			displayObjectContainer->_hx___removedChildren->set_length(0);
            		}
HXLINE(  19)		::openfl::display::_internal::DOMDisplayObject_obj::renderDrawable(displayObjectContainer,renderer);
HXLINE(  21)		bool _hx_tmp;
HXDLIN(  21)		if (::hx::IsNotNull( displayObjectContainer->_hx___cacheBitmap )) {
HXLINE(  21)			_hx_tmp = !(displayObjectContainer->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE(  21)			_hx_tmp = false;
            		}
HXDLIN(  21)		if (_hx_tmp) {
HXLINE(  21)			return;
            		}
HXLINE(  23)		renderer->_hx___pushMaskObject(displayObjectContainer,null());
HXLINE(  25)		if (::hx::IsNotNull( renderer->_hx___stage )) {
HXLINE(  27)			{
HXLINE(  27)				int _g = 0;
HXDLIN(  27)				::Array< ::Dynamic> _g1 = displayObjectContainer->_hx___children;
HXDLIN(  27)				while((_g < _g1->length)){
HXLINE(  27)					 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN(  27)					_g = (_g + 1);
HXLINE(  29)					renderer->_hx___renderDrawable(child);
HXLINE(  30)					child->_hx___renderDirty = false;
            				}
            			}
HXLINE(  33)			displayObjectContainer->_hx___renderDirty = false;
            		}
            		else {
HXLINE(  37)			int _g = 0;
HXDLIN(  37)			::Array< ::Dynamic> _g1 = displayObjectContainer->_hx___children;
HXDLIN(  37)			while((_g < _g1->length)){
HXLINE(  37)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN(  37)				_g = (_g + 1);
HXLINE(  39)				renderer->_hx___renderDrawable(child);
            			}
            		}
HXLINE(  43)		renderer->_hx___popMaskObject(displayObjectContainer,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMDisplayObjectContainer_obj,renderDrawable,(void))

void DOMDisplayObjectContainer_obj::renderDrawableClear( ::openfl::display::DisplayObjectContainer displayObjectContainer, ::openfl::display::DOMRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_8d5a21e4727bbbb1_47_renderDrawableClear)
HXLINE(  48)		{
HXLINE(  48)			 ::Dynamic orphan = displayObjectContainer->_hx___removedChildren->iterator();
HXDLIN(  48)			while(( (bool)(orphan->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  48)				 ::openfl::display::DisplayObject orphan1 = ( ( ::openfl::display::DisplayObject)(orphan->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE(  50)				if (::hx::IsNull( orphan1->stage )) {
HXLINE(  52)					renderer->_hx___renderDrawableClear(orphan1);
            				}
            			}
            		}
HXLINE(  56)		{
HXLINE(  56)			{
HXLINE(  56)				 ::Dynamic orphan1 = displayObjectContainer->_hx___removedChildren->iterator();
HXDLIN(  56)				while(( (bool)(orphan1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  56)					 ::openfl::display::DisplayObject orphan = ( ( ::openfl::display::DisplayObject)(orphan1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXDLIN(  56)					if (::hx::IsNull( orphan->stage )) {
HXLINE(  56)						orphan->_hx___cleanup();
            					}
            				}
            			}
HXDLIN(  56)			displayObjectContainer->_hx___removedChildren->set_length(0);
            		}
HXLINE(  58)		{
HXLINE(  58)			int _g = 0;
HXDLIN(  58)			::Array< ::Dynamic> _g1 = displayObjectContainer->_hx___children;
HXDLIN(  58)			while((_g < _g1->length)){
HXLINE(  58)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN(  58)				_g = (_g + 1);
HXLINE(  60)				renderer->_hx___renderDrawableClear(child);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DOMDisplayObjectContainer_obj,renderDrawableClear,(void))


DOMDisplayObjectContainer_obj::DOMDisplayObjectContainer_obj()
{
}

bool DOMDisplayObjectContainer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"renderDrawableClear") ) { outValue = renderDrawableClear_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DOMDisplayObjectContainer_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DOMDisplayObjectContainer_obj_sStaticStorageInfo = 0;
#endif

::hx::Class DOMDisplayObjectContainer_obj::__mClass;

static ::String DOMDisplayObjectContainer_obj_sStaticFields[] = {
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableClear",d9,1f,f9,ad),
	::String(null())
};

void DOMDisplayObjectContainer_obj::__register()
{
	DOMDisplayObjectContainer_obj _hx_dummy;
	DOMDisplayObjectContainer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.DOMDisplayObjectContainer",06,b4,39,1a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DOMDisplayObjectContainer_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DOMDisplayObjectContainer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DOMDisplayObjectContainer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DOMDisplayObjectContainer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DOMDisplayObjectContainer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
