// Generated by Haxe 4.2.2
#ifndef INCLUDED_ui_Mobilecontrols
#define INCLUDED_ui_Mobilecontrols

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
HX_DECLARE_CLASS0(Config)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS1(ui,ControlsGroup)
HX_DECLARE_CLASS1(ui,FlxVirtualPad)
HX_DECLARE_CLASS1(ui,Hitbox)
HX_DECLARE_CLASS1(ui,Mobilecontrols)

namespace ui{


class HXCPP_CLASS_ATTRIBUTES Mobilecontrols_obj : public  ::flixel::group::FlxTypedSpriteGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedSpriteGroup_obj super;
		typedef Mobilecontrols_obj OBJ_;
		Mobilecontrols_obj();

	public:
		enum { _hx_ClassId = 0x21d0b730 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ui.Mobilecontrols")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ui.Mobilecontrols"); }
		static ::hx::ObjectPtr< Mobilecontrols_obj > __new();
		static ::hx::ObjectPtr< Mobilecontrols_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Mobilecontrols_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Mobilecontrols",f8,f8,7f,63); }

		static  ::ui::ControlsGroup getModeFromNumber(int modeNum);
		static ::Dynamic getModeFromNumber_dyn();

		 ::ui::ControlsGroup mode;
		 ::ui::Hitbox _hitbox;
		 ::ui::FlxVirtualPad _virtualPad;
		 ::Config config;
		void initVirtualPad(int vpadMode);
		::Dynamic initVirtualPad_dyn();

};

} // end namespace ui

#endif /* INCLUDED_ui_Mobilecontrols */ 
