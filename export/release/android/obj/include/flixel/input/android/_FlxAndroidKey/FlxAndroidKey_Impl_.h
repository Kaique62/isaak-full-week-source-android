// Generated by Haxe 4.2.2
#ifndef INCLUDED_flixel_input_android__FlxAndroidKey_FlxAndroidKey_Impl_
#define INCLUDED_flixel_input_android__FlxAndroidKey_FlxAndroidKey_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,input,android,_FlxAndroidKey,FlxAndroidKey_Impl_)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace flixel{
namespace input{
namespace android{
namespace _FlxAndroidKey{


class HXCPP_CLASS_ATTRIBUTES FlxAndroidKey_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxAndroidKey_Impl__obj OBJ_;
		FlxAndroidKey_Impl__obj();

	public:
		enum { _hx_ClassId = 0x55650f16 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_"); }

		inline static ::hx::ObjectPtr< FlxAndroidKey_Impl__obj > __new() {
			::hx::ObjectPtr< FlxAndroidKey_Impl__obj > __this = new FlxAndroidKey_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxAndroidKey_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxAndroidKey_Impl__obj *__this = (FlxAndroidKey_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxAndroidKey_Impl__obj), false, "flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_"));
			*(void **)__this = FlxAndroidKey_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxAndroidKey_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxAndroidKey_Impl_",c2,ca,ec,04); }

		static void __boot();
		static  ::haxe::ds::StringMap fromStringMap;
		static  ::haxe::ds::IntMap toStringMap;
		static int ANY;
		static int NONE;
		static int MENU;
		static int BACK;
		static int fromString(::String s);
		static ::Dynamic fromString_dyn();

		static ::String toString(int this1);
		static ::Dynamic toString_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace android
} // end namespace _FlxAndroidKey

#endif /* INCLUDED_flixel_input_android__FlxAndroidKey_FlxAndroidKey_Impl_ */ 
