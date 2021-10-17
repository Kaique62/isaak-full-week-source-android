// Generated by Haxe 4.2.2
#ifndef INCLUDED_WatermarkOption
#define INCLUDED_WatermarkOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(Option)
HX_DECLARE_CLASS0(WatermarkOption)



class HXCPP_CLASS_ATTRIBUTES WatermarkOption_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef WatermarkOption_obj OBJ_;
		WatermarkOption_obj();

	public:
		enum { _hx_ClassId = 0x274e3759 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="WatermarkOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"WatermarkOption"); }
		static ::hx::ObjectPtr< WatermarkOption_obj > __new(::String desc);
		static ::hx::ObjectPtr< WatermarkOption_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WatermarkOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WatermarkOption",19,52,27,5b); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_WatermarkOption */ 
