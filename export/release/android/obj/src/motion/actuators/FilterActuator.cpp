// Generated by Haxe 4.2.2
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_motion_actuators_FilterActuator
#include <motion/actuators/FilterActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_GenericActuator
#include <motion/actuators/GenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
#endif
#ifndef INCLUDED_motion_actuators_PropertyDetails
#include <motion/actuators/PropertyDetails.h>
#endif
#ifndef INCLUDED_motion_actuators_SimpleActuator
#include <motion/actuators/SimpleActuator.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1b695dffe7ddbafc_17_new,"motion.actuators.FilterActuator","new",0x436e26af,"motion.actuators.FilterActuator.new","motion/actuators/FilterActuator.hx",17,0xb0e64e1f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b695dffe7ddbafc_51_apply,"motion.actuators.FilterActuator","apply",0x23534d7d,"motion.actuators.FilterActuator.apply","motion/actuators/FilterActuator.hx",51,0xb0e64e1f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b695dffe7ddbafc_68_initialize,"motion.actuators.FilterActuator","initialize",0x39c8d2e1,"motion.actuators.FilterActuator.initialize","motion/actuators/FilterActuator.hx",68,0xb0e64e1f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b695dffe7ddbafc_91_setFilter,"motion.actuators.FilterActuator","setFilter",0x827b1089,"motion.actuators.FilterActuator.setFilter","motion/actuators/FilterActuator.hx",91,0xb0e64e1f)
HX_LOCAL_STACK_FRAME(_hx_pos_1b695dffe7ddbafc_118_update,"motion.actuators.FilterActuator","update",0xbcbccb1a,"motion.actuators.FilterActuator.update","motion/actuators/FilterActuator.hx",118,0xb0e64e1f)
namespace motion{
namespace actuators{

void FilterActuator_obj::__construct( ::openfl::display::DisplayObject target,Float duration, ::Dynamic properties){
            	HX_STACKFRAME(&_hx_pos_1b695dffe7ddbafc_17_new)
HXLINE(  19)		this->filterIndex = -1;
HXLINE(  21)		super::__construct(target,duration,properties);
HXLINE(  23)		if (::Std_obj::isOfType( ::Dynamic(properties->__Field(HX_("filter",b8,1f,35,85),::hx::paccDynamic)),( ( ::Dynamic)(::hx::ClassOf< ::hx::Class >()) ))) {
HXLINE(  25)			this->filterClass = properties->__Field(HX_("filter",b8,1f,35,85),::hx::paccDynamic);
HXLINE(  27)			if ((target->get_filters()->length == 0)) {
HXLINE(  28)				target->set_filters(::Array_obj< ::Dynamic>::__new(1)->init(0,::Type_obj::createInstance(this->filterClass,::cpp::VirtualArray_obj::__new(0))));
            			}
HXLINE(  31)			{
HXLINE(  31)				int _g = 0;
HXDLIN(  31)				::Array< ::Dynamic> _g1 = target->get_filters();
HXDLIN(  31)				while((_g < _g1->length)){
HXLINE(  31)					 ::openfl::filters::BitmapFilter filter = _g1->__get(_g).StaticCast<  ::openfl::filters::BitmapFilter >();
HXDLIN(  31)					_g = (_g + 1);
HXLINE(  33)					if (::Std_obj::isOfType(filter,( ( ::Dynamic)(this->filterClass) ))) {
HXLINE(  35)						this->filter = filter;
            					}
            				}
            			}
            		}
            		else {
HXLINE(  43)			this->filterIndex = ( (int)(properties->__Field(HX_("filter",b8,1f,35,85),::hx::paccDynamic)) );
HXLINE(  44)			this->filter = target->get_filters()->__get(this->filterIndex).StaticCast<  ::openfl::filters::BitmapFilter >();
            		}
            	}

Dynamic FilterActuator_obj::__CreateEmpty() { return new FilterActuator_obj; }

void *FilterActuator_obj::_hx_vtable = 0;

Dynamic FilterActuator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FilterActuator_obj > _hx_result = new FilterActuator_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FilterActuator_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x172f0ab4) {
		if (inClassId<=(int)0x05603dab) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x05603dab;
		} else {
			return inClassId==(int)0x172f0ab4;
		}
	} else {
		return inClassId==(int)0x1c8f0915;
	}
}

void FilterActuator_obj::apply(){
            	HX_STACKFRAME(&_hx_pos_1b695dffe7ddbafc_51_apply)
HXLINE(  53)		{
HXLINE(  53)			int _g = 0;
HXDLIN(  53)			::Array< ::String > _g1 = ::Reflect_obj::fields(this->properties);
HXDLIN(  53)			while((_g < _g1->length)){
HXLINE(  53)				::String propertyName = _g1->__get(_g);
HXDLIN(  53)				_g = (_g + 1);
HXLINE(  55)				if ((propertyName != HX_("filter",b8,1f,35,85))) {
HXLINE(  57)					 ::openfl::filters::BitmapFilter _hx_tmp = this->filter;
HXDLIN(  57)					::Reflect_obj::setProperty(_hx_tmp,propertyName,::Reflect_obj::field(this->properties,propertyName));
            				}
            			}
            		}
HXLINE(  63)		this->setFilter();
            	}


void FilterActuator_obj::initialize(){
            	HX_GC_STACKFRAME(&_hx_pos_1b695dffe7ddbafc_68_initialize)
HXLINE(  70)		 ::motion::actuators::PropertyDetails details;
HXLINE(  71)		Float start;
HXLINE(  73)		{
HXLINE(  73)			int _g = 0;
HXDLIN(  73)			::Array< ::String > _g1 = ::Reflect_obj::fields(this->properties);
HXDLIN(  73)			while((_g < _g1->length)){
HXLINE(  73)				::String propertyName = _g1->__get(_g);
HXDLIN(  73)				_g = (_g + 1);
HXLINE(  75)				if ((propertyName != HX_("filter",b8,1f,35,85))) {
HXLINE(  77)					 ::openfl::filters::BitmapFilter target = this->filter;
HXDLIN(  77)					 ::Dynamic value = null();
HXDLIN(  77)					if (::Reflect_obj::hasField(target,propertyName)) {
HXLINE(  77)						value = ::Reflect_obj::field(target,propertyName);
            					}
            					else {
HXLINE(  77)						value = ::Reflect_obj::getProperty(target,propertyName);
            					}
HXDLIN(  77)					start = ( (Float)(value) );
HXLINE(  78)					 ::openfl::filters::BitmapFilter details1 = this->filter;
HXDLIN(  78)					Float details2 = (( (Float)(::Reflect_obj::field(this->properties,propertyName)) ) - start);
HXDLIN(  78)					details =  ::motion::actuators::PropertyDetails_obj::__alloc( HX_CTX ,details1,propertyName,start,details2,::Reflect_obj::hasField(this->filter,(HX_("set_",7d,92,50,4c) + propertyName)));
HXLINE(  79)					this->propertyDetails->push(details);
            				}
            			}
            		}
HXLINE(  85)		this->detailsLength = this->propertyDetails->length;
HXLINE(  86)		this->initialized = true;
            	}


void FilterActuator_obj::setFilter(){
            	HX_STACKFRAME(&_hx_pos_1b695dffe7ddbafc_91_setFilter)
HXLINE(  93)		::Array< ::Dynamic> filters = ( ( ::openfl::display::DisplayObject)(this->target) )->get_filters();
HXLINE(  95)		if ((this->filterIndex > -1)) {
HXLINE(  97)			filters[this->filterIndex] = this->filter;
            		}
            		else {
HXLINE( 101)			int _g = 0;
HXDLIN( 101)			int _g1 = filters->length;
HXDLIN( 101)			while((_g < _g1)){
HXLINE( 101)				_g = (_g + 1);
HXDLIN( 101)				int i = (_g - 1);
HXLINE( 103)				if (::Std_obj::isOfType(filters->__get(i).StaticCast<  ::openfl::filters::BitmapFilter >(),( ( ::Dynamic)(this->filterClass) ))) {
HXLINE( 105)					filters[i] = this->filter;
            				}
            			}
            		}
HXLINE( 113)		{
HXLINE( 113)			 ::openfl::display::DisplayObject target = ( ( ::openfl::display::DisplayObject)(this->target) );
HXDLIN( 113)			 ::Dynamic value = filters;
HXDLIN( 113)			if (::Reflect_obj::hasField(target,HX_("filters",bb,a1,46,09))) {
HXLINE( 113)				::Reflect_obj::setField(target,HX_("filters",bb,a1,46,09),value);
            			}
            			else {
HXLINE( 113)				::Reflect_obj::setProperty(target,HX_("filters",bb,a1,46,09),value);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FilterActuator_obj,setFilter,(void))

void FilterActuator_obj::update(Float currentTime){
            	HX_STACKFRAME(&_hx_pos_1b695dffe7ddbafc_118_update)
HXLINE( 120)		this->super::update(currentTime);
HXLINE( 121)		this->setFilter();
            	}



::hx::ObjectPtr< FilterActuator_obj > FilterActuator_obj::__new( ::openfl::display::DisplayObject target,Float duration, ::Dynamic properties) {
	::hx::ObjectPtr< FilterActuator_obj > __this = new FilterActuator_obj();
	__this->__construct(target,duration,properties);
	return __this;
}

::hx::ObjectPtr< FilterActuator_obj > FilterActuator_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::DisplayObject target,Float duration, ::Dynamic properties) {
	FilterActuator_obj *__this = (FilterActuator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FilterActuator_obj), true, "motion.actuators.FilterActuator"));
	*(void **)__this = FilterActuator_obj::_hx_vtable;
	__this->__construct(target,duration,properties);
	return __this;
}

FilterActuator_obj::FilterActuator_obj()
{
}

void FilterActuator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FilterActuator);
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(filterClass,"filterClass");
	HX_MARK_MEMBER_NAME(filterIndex,"filterIndex");
	 ::motion::actuators::SimpleActuator_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FilterActuator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(filterClass,"filterClass");
	HX_VISIT_MEMBER_NAME(filterIndex,"filterIndex");
	 ::motion::actuators::SimpleActuator_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FilterActuator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return ::hx::Val( filter ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setFilter") ) { return ::hx::Val( setFilter_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return ::hx::Val( initialize_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"filterClass") ) { return ::hx::Val( filterClass ); }
		if (HX_FIELD_EQ(inName,"filterIndex") ) { return ::hx::Val( filterIndex ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FilterActuator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast<  ::openfl::filters::BitmapFilter >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"filterClass") ) { filterClass=inValue.Cast< ::hx::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filterIndex") ) { filterIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FilterActuator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("filter",b8,1f,35,85));
	outFields->push(HX_("filterClass",60,cd,0a,f8));
	outFields->push(HX_("filterIndex",3a,f0,c6,6d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FilterActuator_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::filters::BitmapFilter */ ,(int)offsetof(FilterActuator_obj,filter),HX_("filter",b8,1f,35,85)},
	{::hx::fsObject /* ::hx::Class */ ,(int)offsetof(FilterActuator_obj,filterClass),HX_("filterClass",60,cd,0a,f8)},
	{::hx::fsInt,(int)offsetof(FilterActuator_obj,filterIndex),HX_("filterIndex",3a,f0,c6,6d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FilterActuator_obj_sStaticStorageInfo = 0;
#endif

static ::String FilterActuator_obj_sMemberFields[] = {
	HX_("filter",b8,1f,35,85),
	HX_("filterClass",60,cd,0a,f8),
	HX_("filterIndex",3a,f0,c6,6d),
	HX_("apply",6e,85,3b,24),
	HX_("initialize",50,31,bb,ec),
	HX_("setFilter",fa,94,dc,e4),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class FilterActuator_obj::__mClass;

void FilterActuator_obj::__register()
{
	FilterActuator_obj _hx_dummy;
	FilterActuator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("motion.actuators.FilterActuator",3d,a3,33,9f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FilterActuator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FilterActuator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FilterActuator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FilterActuator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace actuators
