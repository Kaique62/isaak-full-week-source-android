// Generated by Haxe 4.2.2
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Eraser
#define INCLUDED_flixel_system_debug_interaction_tools_Eraser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_debug_interaction_tools_Tool
#include <flixel/system/debug/interaction/tools/Tool.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS3(flixel,_hx_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,interaction,Interaction)
HX_DECLARE_CLASS5(flixel,_hx_system,debug,interaction,tools,Eraser)
HX_DECLARE_CLASS5(flixel,_hx_system,debug,interaction,tools,Tool)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES Eraser_obj : public  ::flixel::_hx_system::debug::interaction::tools::Tool_obj
{
	public:
		typedef  ::flixel::_hx_system::debug::interaction::tools::Tool_obj super;
		typedef Eraser_obj OBJ_;
		Eraser_obj();

	public:
		enum { _hx_ClassId = 0x717bcd95 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.interaction.tools.Eraser")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.system.debug.interaction.tools.Eraser"); }
		static ::hx::ObjectPtr< Eraser_obj > __new();
		static ::hx::ObjectPtr< Eraser_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Eraser_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Eraser",ec,54,c3,7a); }

		 ::flixel::_hx_system::debug::interaction::tools::Tool init( ::flixel::_hx_system::debug::interaction::Interaction Brain);

		void update();

		void activate();

		void doDeletion(bool remove);
		::Dynamic doDeletion_dyn();

		void findAndDelete( ::flixel::group::FlxTypedGroup items,::hx::Null< bool >  remove);
		::Dynamic findAndDelete_dyn();

		void removeFromMemory( ::flixel::FlxBasic item, ::flixel::group::FlxTypedGroup parentGroup);
		::Dynamic removeFromMemory_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools

#endif /* INCLUDED_flixel_system_debug_interaction_tools_Eraser */ 
