// Generated by Haxe 4.2.2
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionEffect
#include <flixel/addons/transition/TransitionEffect.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionFade
#include <flixel/addons/transition/TransitionFade.h>
#endif
#ifndef INCLUDED_flixel_addons_transition__TransitionFade_GraphicDiagonalGradient
#include <flixel/addons/transition/_TransitionFade/GraphicDiagonalGradient.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxGradient
#include <flixel/util/FlxGradient.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_85f0573c4a29b283_23_new,"flixel.addons.transition.TransitionFade","new",0x4927e913,"flixel.addons.transition.TransitionFade.new","flixel/addons/transition/TransitionFade.hx",23,0x307a6abc)
HX_LOCAL_STACK_FRAME(_hx_pos_85f0573c4a29b283_43_destroy,"flixel.addons.transition.TransitionFade","destroy",0x16001b2d,"flixel.addons.transition.TransitionFade.destroy","flixel/addons/transition/TransitionFade.hx",43,0x307a6abc)
HX_LOCAL_STACK_FRAME(_hx_pos_85f0573c4a29b283_49_start,"flixel.addons.transition.TransitionFade","start",0xbc9d5fd5,"flixel.addons.transition.TransitionFade.start","flixel/addons/transition/TransitionFade.hx",49,0x307a6abc)
HX_LOCAL_STACK_FRAME(_hx_pos_85f0573c4a29b283_85_setTweenValues,"flixel.addons.transition.TransitionFade","setTweenValues",0x069b0e58,"flixel.addons.transition.TransitionFade.setTweenValues","flixel/addons/transition/TransitionFade.hx",85,0x307a6abc)
HX_LOCAL_STACK_FRAME(_hx_pos_85f0573c4a29b283_151_makeSprite,"flixel.addons.transition.TransitionFade","makeSprite",0x080a6440,"flixel.addons.transition.TransitionFade.makeSprite","flixel/addons/transition/TransitionFade.hx",151,0x307a6abc)
HX_LOCAL_STACK_FRAME(_hx_pos_85f0573c4a29b283_200_getGradient,"flixel.addons.transition.TransitionFade","getGradient",0xadab8059,"flixel.addons.transition.TransitionFade.getGradient","flixel/addons/transition/TransitionFade.hx",200,0x307a6abc)
HX_LOCAL_STACK_FRAME(_hx_pos_85f0573c4a29b283_219_finishTween,"flixel.addons.transition.TransitionFade","finishTween",0x9dee50cb,"flixel.addons.transition.TransitionFade.finishTween","flixel/addons/transition/TransitionFade.hx",219,0x307a6abc)
namespace flixel{
namespace addons{
namespace transition{

void TransitionFade_obj::__construct( ::flixel::addons::transition::TransitionData data){
            	HX_STACKFRAME(&_hx_pos_85f0573c4a29b283_23_new)
HXLINE(  31)		this->tweenValEnd2 = ((Float)0);
HXLINE(  30)		this->tweenValEnd = ((Float)0);
HXLINE(  29)		this->tweenValStart2 = ((Float)0);
HXLINE(  28)		this->tweenValStart = ((Float)0);
HXLINE(  27)		this->tweenStr2 = HX_("",00,00,00,00);
HXLINE(  26)		this->tweenStr = HX_("",00,00,00,00);
HXLINE(  35)		super::__construct(data);
HXLINE(  37)		this->back = this->makeSprite(data->direction->x,data->direction->y,data->region);
HXLINE(  38)		this->back->scrollFactor->set(0,0);
HXLINE(  39)		this->add(this->back);
            	}

Dynamic TransitionFade_obj::__CreateEmpty() { return new TransitionFade_obj; }

void *TransitionFade_obj::_hx_vtable = 0;

Dynamic TransitionFade_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TransitionFade_obj > _hx_result = new TransitionFade_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TransitionFade_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5b6c5e35) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x5b6c5e35;
		}
	} else {
		if (inClassId<=(int)0x7dab0655) {
			return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
		} else {
			return inClassId==(int)0x7fcf2fe2;
		}
	}
}

void TransitionFade_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_85f0573c4a29b283_43_destroy)
HXLINE(  44)		this->super::destroy();
HXLINE(  45)		this->back = null();
            	}


void TransitionFade_obj::start(int NewStatus){
            	HX_STACKFRAME(&_hx_pos_85f0573c4a29b283_49_start)
HXLINE(  50)		this->super::start(NewStatus);
HXLINE(  52)		this->setTweenValues(NewStatus,this->_data->direction->x,this->_data->direction->y);
HXLINE(  54)		::String _hx_switch_0 = this->tweenStr;
            		if (  (_hx_switch_0==HX_("alpha",5e,a7,96,21)) ){
HXLINE(  57)			this->back->set_alpha(this->tweenValStart);
HXDLIN(  57)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("x",78,00,00,00)) ){
HXLINE(  59)			this->back->set_x(this->tweenValStart);
HXDLIN(  59)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("y",79,00,00,00)) ){
HXLINE(  61)			this->back->set_y(this->tweenValStart);
HXDLIN(  61)			goto _hx_goto_2;
            		}
            		_hx_goto_2:;
HXLINE(  63)		::String _hx_switch_1 = this->tweenStr2;
            		if (  (_hx_switch_1==HX_("alpha",5e,a7,96,21)) ){
HXLINE(  66)			this->back->set_alpha(this->tweenValStart2);
HXDLIN(  66)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_1==HX_("x",78,00,00,00)) ){
HXLINE(  68)			this->back->set_x(this->tweenValStart2);
HXDLIN(  68)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_1==HX_("y",79,00,00,00)) ){
HXLINE(  70)			this->back->set_y(this->tweenValStart2);
HXDLIN(  70)			goto _hx_goto_3;
            		}
            		_hx_goto_3:;
HXLINE(  73)		 ::Dynamic Values =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE(  74)		::Reflect_obj::setField(Values,this->tweenStr,this->tweenValEnd);
HXLINE(  75)		if ((this->tweenStr2 != HX_("",00,00,00,00))) {
HXLINE(  77)			::Reflect_obj::setField(Values,this->tweenStr2,this->tweenValEnd2);
            		}
HXLINE(  79)		this->_data->tweenOptions->__SetField(HX_("onComplete",f8,d4,7e,5d),this->finishTween_dyn(),::hx::paccDynamic);
HXLINE(  80)		::flixel::tweens::FlxTween_obj::tween(this->back,Values,this->_data->duration,this->_data->tweenOptions);
            	}


void TransitionFade_obj::setTweenValues(int NewStatus,Float DirX,Float DirY){
            	HX_STACKFRAME(&_hx_pos_85f0573c4a29b283_85_setTweenValues)
HXDLIN(  85)		bool _hx_tmp;
HXDLIN(  85)		if ((DirX == 0)) {
HXDLIN(  85)			_hx_tmp = (DirY == 0);
            		}
            		else {
HXDLIN(  85)			_hx_tmp = false;
            		}
HXDLIN(  85)		if (_hx_tmp) {
HXLINE(  88)			this->tweenStr = HX_("alpha",5e,a7,96,21);
HXLINE(  89)			Float _hx_tmp;
HXDLIN(  89)			if ((NewStatus == 0)) {
HXLINE(  89)				_hx_tmp = ((Float)0.0);
            			}
            			else {
HXLINE(  89)				_hx_tmp = ((Float)1.0);
            			}
HXDLIN(  89)			this->tweenValStart = _hx_tmp;
HXLINE(  90)			Float _hx_tmp1;
HXDLIN(  90)			if ((NewStatus == 0)) {
HXLINE(  90)				_hx_tmp1 = ((Float)1.0);
            			}
            			else {
HXLINE(  90)				_hx_tmp1 = ((Float)0.0);
            			}
HXDLIN(  90)			this->tweenValEnd = _hx_tmp1;
            		}
            		else {
HXLINE(  92)			bool _hx_tmp;
HXDLIN(  92)			if ((::Math_obj::abs(DirX) > 0)) {
HXLINE(  92)				_hx_tmp = (DirY == 0);
            			}
            			else {
HXLINE(  92)				_hx_tmp = false;
            			}
HXDLIN(  92)			if (_hx_tmp) {
HXLINE(  95)				this->tweenStr = HX_("x",78,00,00,00);
HXLINE(  96)				if ((DirX > 0)) {
HXLINE(  98)					Float _hx_tmp;
HXDLIN(  98)					if ((NewStatus == 0)) {
HXLINE(  98)						_hx_tmp = -(this->back->get_width());
            					}
            					else {
HXLINE(  98)						_hx_tmp = ( (Float)(0) );
            					}
HXDLIN(  98)					this->tweenValStart = _hx_tmp;
HXLINE(  99)					Float _hx_tmp1;
HXDLIN(  99)					if ((NewStatus == 0)) {
HXLINE(  99)						_hx_tmp1 = ( (Float)(0) );
            					}
            					else {
HXLINE(  99)						_hx_tmp1 = -(this->back->get_width());
            					}
HXDLIN(  99)					this->tweenValEnd = _hx_tmp1;
            				}
            				else {
HXLINE( 103)					Float _hx_tmp;
HXDLIN( 103)					if ((NewStatus == 0)) {
HXLINE( 103)						_hx_tmp = ( (Float)(::flixel::FlxG_obj::width) );
            					}
            					else {
HXLINE( 103)						_hx_tmp = (-(this->back->get_width()) / ( (Float)(2) ));
            					}
HXDLIN( 103)					this->tweenValStart = _hx_tmp;
HXLINE( 104)					Float _hx_tmp1;
HXDLIN( 104)					if ((NewStatus == 0)) {
HXLINE( 104)						_hx_tmp1 = (-(this->back->get_width()) / ( (Float)(2) ));
            					}
            					else {
HXLINE( 104)						_hx_tmp1 = ( (Float)(::flixel::FlxG_obj::width) );
            					}
HXDLIN( 104)					this->tweenValEnd = _hx_tmp1;
            				}
            			}
            			else {
HXLINE( 107)				bool _hx_tmp;
HXDLIN( 107)				if ((DirX == 0)) {
HXLINE( 107)					_hx_tmp = (::Math_obj::abs(DirY) > 0);
            				}
            				else {
HXLINE( 107)					_hx_tmp = false;
            				}
HXDLIN( 107)				if (_hx_tmp) {
HXLINE( 110)					this->tweenStr = HX_("y",79,00,00,00);
HXLINE( 111)					if ((DirY > 0)) {
HXLINE( 113)						Float _hx_tmp;
HXDLIN( 113)						if ((NewStatus == 0)) {
HXLINE( 113)							_hx_tmp = -(this->back->get_height());
            						}
            						else {
HXLINE( 113)							_hx_tmp = ( (Float)(0) );
            						}
HXDLIN( 113)						this->tweenValStart = _hx_tmp;
HXLINE( 114)						Float _hx_tmp1;
HXDLIN( 114)						if ((NewStatus == 0)) {
HXLINE( 114)							_hx_tmp1 = ( (Float)(0) );
            						}
            						else {
HXLINE( 114)							_hx_tmp1 = -(this->back->get_height());
            						}
HXDLIN( 114)						this->tweenValEnd = _hx_tmp1;
            					}
            					else {
HXLINE( 118)						Float _hx_tmp;
HXDLIN( 118)						if ((NewStatus == 0)) {
HXLINE( 118)							_hx_tmp = ( (Float)(::flixel::FlxG_obj::height) );
            						}
            						else {
HXLINE( 118)							_hx_tmp = (-(this->back->get_height()) / ( (Float)(2) ));
            						}
HXDLIN( 118)						this->tweenValStart = _hx_tmp;
HXLINE( 119)						Float _hx_tmp1;
HXDLIN( 119)						if ((NewStatus == 0)) {
HXLINE( 119)							_hx_tmp1 = (-(this->back->get_height()) / ( (Float)(2) ));
            						}
            						else {
HXLINE( 119)							_hx_tmp1 = ( (Float)(::flixel::FlxG_obj::height) );
            						}
HXDLIN( 119)						this->tweenValEnd = _hx_tmp1;
            					}
            				}
            				else {
HXLINE( 122)					bool _hx_tmp;
HXDLIN( 122)					if ((::Math_obj::abs(DirX) > 0)) {
HXLINE( 122)						_hx_tmp = (::Math_obj::abs(DirY) > 0);
            					}
            					else {
HXLINE( 122)						_hx_tmp = false;
            					}
HXDLIN( 122)					if (_hx_tmp) {
HXLINE( 125)						this->tweenStr = HX_("x",78,00,00,00);
HXLINE( 126)						this->tweenStr2 = HX_("y",79,00,00,00);
HXLINE( 127)						if ((DirX > 0)) {
HXLINE( 129)							Float _hx_tmp;
HXDLIN( 129)							if ((NewStatus == 0)) {
HXLINE( 129)								_hx_tmp = -(this->back->get_width());
            							}
            							else {
HXLINE( 129)								_hx_tmp = ( (Float)(0) );
            							}
HXDLIN( 129)							this->tweenValStart = _hx_tmp;
HXLINE( 130)							Float _hx_tmp1;
HXDLIN( 130)							if ((NewStatus == 0)) {
HXLINE( 130)								_hx_tmp1 = ( (Float)(0) );
            							}
            							else {
HXLINE( 130)								_hx_tmp1 = -(this->back->get_width());
            							}
HXDLIN( 130)							this->tweenValEnd = _hx_tmp1;
            						}
            						else {
HXLINE( 134)							Float _hx_tmp;
HXDLIN( 134)							if ((NewStatus == 0)) {
HXLINE( 134)								_hx_tmp = ( (Float)(::flixel::FlxG_obj::width) );
            							}
            							else {
HXLINE( 134)								_hx_tmp = (-(this->back->get_width()) * ((Float)0.66666666666666663));
            							}
HXDLIN( 134)							this->tweenValStart = _hx_tmp;
HXLINE( 135)							Float _hx_tmp1;
HXDLIN( 135)							if ((NewStatus == 0)) {
HXLINE( 135)								_hx_tmp1 = (-(this->back->get_width()) * ((Float)0.66666666666666663));
            							}
            							else {
HXLINE( 135)								_hx_tmp1 = ( (Float)(::flixel::FlxG_obj::width) );
            							}
HXDLIN( 135)							this->tweenValEnd = _hx_tmp1;
            						}
HXLINE( 137)						if ((DirY > 0)) {
HXLINE( 139)							Float _hx_tmp;
HXDLIN( 139)							if ((NewStatus == 0)) {
HXLINE( 139)								_hx_tmp = -(this->back->get_height());
            							}
            							else {
HXLINE( 139)								_hx_tmp = ( (Float)(0) );
            							}
HXDLIN( 139)							this->tweenValStart2 = _hx_tmp;
HXLINE( 140)							Float _hx_tmp1;
HXDLIN( 140)							if ((NewStatus == 0)) {
HXLINE( 140)								_hx_tmp1 = ( (Float)(0) );
            							}
            							else {
HXLINE( 140)								_hx_tmp1 = -(this->back->get_height());
            							}
HXDLIN( 140)							this->tweenValEnd2 = _hx_tmp1;
            						}
            						else {
HXLINE( 144)							Float _hx_tmp;
HXDLIN( 144)							if ((NewStatus == 0)) {
HXLINE( 144)								_hx_tmp = ( (Float)(::flixel::FlxG_obj::height) );
            							}
            							else {
HXLINE( 144)								_hx_tmp = (-(this->back->get_height()) * ((Float)0.66666666666666663));
            							}
HXDLIN( 144)							this->tweenValStart2 = _hx_tmp;
HXLINE( 145)							Float _hx_tmp1;
HXDLIN( 145)							if ((NewStatus == 0)) {
HXLINE( 145)								_hx_tmp1 = (-(this->back->get_height()) * ((Float)0.66666666666666663));
            							}
            							else {
HXLINE( 145)								_hx_tmp1 = ( (Float)(::flixel::FlxG_obj::height) );
            							}
HXDLIN( 145)							this->tweenValEnd2 = _hx_tmp1;
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(TransitionFade_obj,setTweenValues,(void))

 ::flixel::FlxSprite TransitionFade_obj::makeSprite(Float DirX,Float DirY, ::flixel::math::FlxRect region){
            	HX_GC_STACKFRAME(&_hx_pos_85f0573c4a29b283_151_makeSprite)
HXLINE( 152)		 ::flixel::FlxSprite s =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,region->x,region->y,null());
HXLINE( 153)		Float locX = ( (Float)(0) );
HXLINE( 154)		Float locY = ( (Float)(0) );
HXLINE( 155)		int angle = 0;
HXLINE( 156)		 ::openfl::display::BitmapData pixels = null();
HXLINE( 157)		bool _hx_tmp;
HXDLIN( 157)		if ((DirX == 0)) {
HXLINE( 157)			_hx_tmp = (DirY == 0);
            		}
            		else {
HXLINE( 157)			_hx_tmp = false;
            		}
HXDLIN( 157)		if (_hx_tmp) {
HXLINE( 160)			int _hx_tmp = ::Std_obj::_hx_int(region->width);
HXDLIN( 160)			int _hx_tmp1 = ::Std_obj::_hx_int(region->height);
HXDLIN( 160)			s->makeGraphic(_hx_tmp,_hx_tmp1,this->_data->color,null(),null());
            		}
            		else {
HXLINE( 162)			bool _hx_tmp;
HXDLIN( 162)			if ((DirX == 0)) {
HXLINE( 162)				_hx_tmp = (::Math_obj::abs(DirY) > 0);
            			}
            			else {
HXLINE( 162)				_hx_tmp = false;
            			}
HXDLIN( 162)			if (_hx_tmp) {
HXLINE( 165)				if ((DirY > 0)) {
HXLINE( 165)					locY = region->height;
            				}
            				else {
HXLINE( 165)					locY = ( (Float)(0) );
            				}
HXLINE( 166)				if ((DirY > 0)) {
HXLINE( 166)					angle = 90;
            				}
            				else {
HXLINE( 166)					angle = 270;
            				}
HXLINE( 167)				int _hx_tmp = ::Std_obj::_hx_int((region->height * ( (Float)(2) )));
HXDLIN( 167)				s->makeGraphic(1,_hx_tmp,this->_data->color,null(),null());
HXLINE( 168)				pixels = s->get_pixels();
HXLINE( 169)				int gvert = ::Std_obj::_hx_int(region->height);
HXDLIN( 169)				 ::openfl::display::BitmapData gvert1 = ::flixel::util::FlxGradient_obj::createGradientBitmapData(1,gvert,::Array_obj< int >::__new(2)->init(0,this->_data->color)->init(1,0),1,angle,null());
HXLINE( 170)				 ::openfl::geom::Rectangle gvert2 = gvert1->rect;
HXDLIN( 170)				pixels->copyPixels(gvert1,gvert2, ::openfl::geom::Point_obj::__alloc( HX_CTX ,0,locY),null(),null(),null());
HXLINE( 171)				s->set_pixels(pixels);
HXLINE( 172)				s->scale->set(region->width,((Float)1.0));
HXLINE( 173)				s->updateHitbox();
            			}
            			else {
HXLINE( 175)				bool _hx_tmp;
HXDLIN( 175)				if ((::Math_obj::abs(DirX) > 0)) {
HXLINE( 175)					_hx_tmp = (DirY == 0);
            				}
            				else {
HXLINE( 175)					_hx_tmp = false;
            				}
HXDLIN( 175)				if (_hx_tmp) {
HXLINE( 178)					if ((DirX > 0)) {
HXLINE( 178)						locX = region->width;
            					}
            					else {
HXLINE( 178)						locX = ( (Float)(0) );
            					}
HXLINE( 179)					if ((DirX > 0)) {
HXLINE( 179)						angle = 0;
            					}
            					else {
HXLINE( 179)						angle = 180;
            					}
HXLINE( 180)					int _hx_tmp = ::Std_obj::_hx_int((region->width * ( (Float)(2) )));
HXDLIN( 180)					s->makeGraphic(_hx_tmp,1,this->_data->color,null(),null());
HXLINE( 181)					pixels = s->get_pixels();
HXLINE( 182)					int ghorz = ::Std_obj::_hx_int(region->width);
HXDLIN( 182)					 ::openfl::display::BitmapData ghorz1 = ::flixel::util::FlxGradient_obj::createGradientBitmapData(ghorz,1,::Array_obj< int >::__new(2)->init(0,this->_data->color)->init(1,0),1,angle,null());
HXLINE( 183)					 ::openfl::geom::Rectangle ghorz2 = ghorz1->rect;
HXDLIN( 183)					pixels->copyPixels(ghorz1,ghorz2, ::openfl::geom::Point_obj::__alloc( HX_CTX ,locX,0),null(),null(),null());
HXLINE( 184)					s->set_pixels(pixels);
HXLINE( 185)					s->scale->set(((Float)1.0),region->height);
HXLINE( 186)					s->updateHitbox();
            				}
            				else {
HXLINE( 188)					bool _hx_tmp;
HXDLIN( 188)					if ((::Math_obj::abs(DirX) > 0)) {
HXLINE( 188)						_hx_tmp = (::Math_obj::abs(DirY) > 0);
            					}
            					else {
HXLINE( 188)						_hx_tmp = false;
            					}
HXDLIN( 188)					if (_hx_tmp) {
HXLINE( 191)						if ((DirY > 0)) {
HXLINE( 191)							locY = region->height;
            						}
            						else {
HXLINE( 191)							locY = ( (Float)(0) );
            						}
HXLINE( 192)						s->loadGraphic(this->getGradient(),null(),null(),null(),null(),null());
HXLINE( 193)						s->set_flipX((DirX < 0));
HXLINE( 194)						s->set_flipY((DirY < 0));
            					}
            				}
            			}
            		}
HXLINE( 196)		return s;
            	}


HX_DEFINE_DYNAMIC_FUNC3(TransitionFade_obj,makeSprite,return )

 ::openfl::display::BitmapData TransitionFade_obj::getGradient(){
            	HX_GC_STACKFRAME(&_hx_pos_85f0573c4a29b283_200_getGradient)
HXLINE( 202)		 ::flixel::addons::transition::_TransitionFade::GraphicDiagonalGradient rawBmp =  ::flixel::addons::transition::_TransitionFade::GraphicDiagonalGradient_obj::__alloc( HX_CTX ,0,0,null(),null());
HXLINE( 203)		 ::openfl::display::BitmapData gdiag = ( ( ::openfl::display::BitmapData)(rawBmp) );
HXLINE( 204)		 ::openfl::display::BitmapData gdiag_scaled =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,(::flixel::FlxG_obj::width * 2),(::flixel::FlxG_obj::height * 2),true,null());
HXLINE( 205)		 ::openfl::geom::Matrix m =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE( 206)		m->scale((( (Float)(gdiag_scaled->width) ) / ( (Float)(gdiag->width) )),(( (Float)(gdiag_scaled->height) ) / ( (Float)(gdiag->height) )));
HXLINE( 207)		gdiag_scaled->draw(gdiag,m,null(),null(),null(),true);
HXLINE( 208)		int theColor = this->_data->color;
HXLINE( 209)		 ::openfl::display::BitmapData final_pixels =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,(::flixel::FlxG_obj::width * 3),(::flixel::FlxG_obj::height * 3),true,theColor);
HXLINE( 210)		 ::openfl::geom::Rectangle gdiag_scaled1 = gdiag_scaled->rect;
HXDLIN( 210)		final_pixels->copyChannel(gdiag_scaled,gdiag_scaled1, ::openfl::geom::Point_obj::__alloc( HX_CTX ,(final_pixels->width - gdiag_scaled->width),(final_pixels->height - gdiag_scaled->height)),1,8);
HXLINE( 212)		gdiag->dispose();
HXLINE( 213)		gdiag_scaled->dispose();
HXLINE( 214)		return final_pixels;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TransitionFade_obj,getGradient,return )

void TransitionFade_obj::finishTween( ::flixel::tweens::FlxTween f){
            	HX_STACKFRAME(&_hx_pos_85f0573c4a29b283_219_finishTween)
HXDLIN( 219)		this->delayThenFinish();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TransitionFade_obj,finishTween,(void))


::hx::ObjectPtr< TransitionFade_obj > TransitionFade_obj::__new( ::flixel::addons::transition::TransitionData data) {
	::hx::ObjectPtr< TransitionFade_obj > __this = new TransitionFade_obj();
	__this->__construct(data);
	return __this;
}

::hx::ObjectPtr< TransitionFade_obj > TransitionFade_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData data) {
	TransitionFade_obj *__this = (TransitionFade_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TransitionFade_obj), true, "flixel.addons.transition.TransitionFade"));
	*(void **)__this = TransitionFade_obj::_hx_vtable;
	__this->__construct(data);
	return __this;
}

TransitionFade_obj::TransitionFade_obj()
{
}

void TransitionFade_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TransitionFade);
	HX_MARK_MEMBER_NAME(back,"back");
	HX_MARK_MEMBER_NAME(tweenStr,"tweenStr");
	HX_MARK_MEMBER_NAME(tweenStr2,"tweenStr2");
	HX_MARK_MEMBER_NAME(tweenValStart,"tweenValStart");
	HX_MARK_MEMBER_NAME(tweenValStart2,"tweenValStart2");
	HX_MARK_MEMBER_NAME(tweenValEnd,"tweenValEnd");
	HX_MARK_MEMBER_NAME(tweenValEnd2,"tweenValEnd2");
	 ::flixel::addons::transition::TransitionEffect_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TransitionFade_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(back,"back");
	HX_VISIT_MEMBER_NAME(tweenStr,"tweenStr");
	HX_VISIT_MEMBER_NAME(tweenStr2,"tweenStr2");
	HX_VISIT_MEMBER_NAME(tweenValStart,"tweenValStart");
	HX_VISIT_MEMBER_NAME(tweenValStart2,"tweenValStart2");
	HX_VISIT_MEMBER_NAME(tweenValEnd,"tweenValEnd");
	HX_VISIT_MEMBER_NAME(tweenValEnd2,"tweenValEnd2");
	 ::flixel::addons::transition::TransitionEffect_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TransitionFade_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"back") ) { return ::hx::Val( back ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tweenStr") ) { return ::hx::Val( tweenStr ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tweenStr2") ) { return ::hx::Val( tweenStr2 ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"makeSprite") ) { return ::hx::Val( makeSprite_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tweenValEnd") ) { return ::hx::Val( tweenValEnd ); }
		if (HX_FIELD_EQ(inName,"getGradient") ) { return ::hx::Val( getGradient_dyn() ); }
		if (HX_FIELD_EQ(inName,"finishTween") ) { return ::hx::Val( finishTween_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tweenValEnd2") ) { return ::hx::Val( tweenValEnd2 ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tweenValStart") ) { return ::hx::Val( tweenValStart ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"tweenValStart2") ) { return ::hx::Val( tweenValStart2 ); }
		if (HX_FIELD_EQ(inName,"setTweenValues") ) { return ::hx::Val( setTweenValues_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TransitionFade_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"back") ) { back=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tweenStr") ) { tweenStr=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tweenStr2") ) { tweenStr2=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"tweenValEnd") ) { tweenValEnd=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"tweenValEnd2") ) { tweenValEnd2=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tweenValStart") ) { tweenValStart=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"tweenValStart2") ) { tweenValStart2=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TransitionFade_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("back",27,da,10,41));
	outFields->push(HX_("tweenStr",06,cb,ce,11));
	outFields->push(HX_("tweenStr2",6c,da,22,83));
	outFields->push(HX_("tweenValStart",4c,bf,69,c2));
	outFields->push(HX_("tweenValStart2",66,a3,1d,5a));
	outFields->push(HX_("tweenValEnd",45,e0,eb,f3));
	outFields->push(HX_("tweenValEnd2",4d,5c,78,7a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TransitionFade_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(TransitionFade_obj,back),HX_("back",27,da,10,41)},
	{::hx::fsString,(int)offsetof(TransitionFade_obj,tweenStr),HX_("tweenStr",06,cb,ce,11)},
	{::hx::fsString,(int)offsetof(TransitionFade_obj,tweenStr2),HX_("tweenStr2",6c,da,22,83)},
	{::hx::fsFloat,(int)offsetof(TransitionFade_obj,tweenValStart),HX_("tweenValStart",4c,bf,69,c2)},
	{::hx::fsFloat,(int)offsetof(TransitionFade_obj,tweenValStart2),HX_("tweenValStart2",66,a3,1d,5a)},
	{::hx::fsFloat,(int)offsetof(TransitionFade_obj,tweenValEnd),HX_("tweenValEnd",45,e0,eb,f3)},
	{::hx::fsFloat,(int)offsetof(TransitionFade_obj,tweenValEnd2),HX_("tweenValEnd2",4d,5c,78,7a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TransitionFade_obj_sStaticStorageInfo = 0;
#endif

static ::String TransitionFade_obj_sMemberFields[] = {
	HX_("back",27,da,10,41),
	HX_("tweenStr",06,cb,ce,11),
	HX_("tweenStr2",6c,da,22,83),
	HX_("tweenValStart",4c,bf,69,c2),
	HX_("tweenValStart2",66,a3,1d,5a),
	HX_("tweenValEnd",45,e0,eb,f3),
	HX_("tweenValEnd2",4d,5c,78,7a),
	HX_("destroy",fa,2c,86,24),
	HX_("start",62,74,0b,84),
	HX_("setTweenValues",2b,80,ce,9b),
	HX_("makeSprite",93,b0,65,15),
	HX_("getGradient",a6,fc,32,50),
	HX_("finishTween",18,cd,75,40),
	::String(null()) };

::hx::Class TransitionFade_obj::__mClass;

void TransitionFade_obj::__register()
{
	TransitionFade_obj _hx_dummy;
	TransitionFade_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.transition.TransitionFade",a1,63,fb,b1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TransitionFade_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TransitionFade_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TransitionFade_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TransitionFade_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace transition
