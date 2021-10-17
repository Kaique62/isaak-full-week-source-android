// Generated by Haxe 4.2.2
#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_GlobalVideo
#include <GlobalVideo.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_VideoState
#include <VideoState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_db9755626f9b4c83_20_new,"VideoState","new",0xa15b6ba8,"VideoState.new","VideoState.hx",20,0x4a31c0c8)
HX_LOCAL_STACK_FRAME(_hx_pos_db9755626f9b4c83_45_create,"VideoState","create",0x9d1208b4,"VideoState.create","VideoState.hx",45,0x4a31c0c8)
HX_LOCAL_STACK_FRAME(_hx_pos_db9755626f9b4c83_114_update,"VideoState","update",0xa80827c1,"VideoState.update","VideoState.hx",114,0x4a31c0c8)

void VideoState_obj::__construct(::String source, ::flixel::FlxState toTrans){
            	HX_STACKFRAME(&_hx_pos_db9755626f9b4c83_20_new)
HXLINE(  34)		this->pauseText = HX_("Press P To Pause/Unpause",8c,59,2b,73);
HXLINE(  33)		this->doShit = false;
HXLINE(  32)		this->defaultText = HX_("",00,00,00,00);
HXLINE(  31)		this->videoFrames = 0;
HXLINE(  30)		this->prevSoundMultiplier = ((Float)1);
HXLINE(  29)		this->soundMultiplier = ((Float)1);
HXLINE(  28)		this->useSound = false;
HXLINE(  26)		this->notDone = true;
HXLINE(  25)		this->fuckingVolume = ((Float)1);
HXLINE(  22)		this->leSource = HX_("",00,00,00,00);
HXLINE(  38)		super::__construct(null(),null());
HXLINE(  40)		this->leSource = source;
HXLINE(  41)		this->transClass = toTrans;
            	}

Dynamic VideoState_obj::__CreateEmpty() { return new VideoState_obj; }

void *VideoState_obj::_hx_vtable = 0;

Dynamic VideoState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VideoState_obj > _hx_result = new VideoState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool VideoState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x6e4dda76 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void VideoState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_db9755626f9b4c83_45_create)
HXLINE(  46)		this->super::create();
HXLINE(  47)		::flixel::FlxG_obj::autoPause = false;
HXLINE(  48)		this->doShit = false;
HXLINE(  50)		if (::GlobalVideo_obj::isWebm) {
HXLINE(  52)			this->videoFrames = ( (int)(::Std_obj::parseInt(::openfl::utils::Assets_obj::getText(::StringTools_obj::replace(this->leSource,HX_(".webm",87,0c,64,cb),HX_(".txt",02,3f,c0,1e))))) );
            		}
HXLINE(  55)		this->fuckingVolume = ::flixel::FlxG_obj::sound->music->_volume;
HXLINE(  56)		::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
HXLINE(  57)		bool isHTML = false;
HXLINE(  61)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  62)		this->add(bg);
HXLINE(  64)		this->txt =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,::flixel::FlxG_obj::width,this->defaultText,32,null());
HXLINE(  67)		this->txt->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),32,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  68)		this->txt->screenCenter(null());
HXLINE(  69)		this->add(this->txt);
HXLINE(  71)		if (::GlobalVideo_obj::isWebm) {
HXLINE(  73)			bool _hx_tmp;
HXDLIN(  73)			if (!(::openfl::utils::Assets_obj::exists(::StringTools_obj::replace(this->leSource,HX_(".webm",87,0c,64,cb),HX_(".ogg",e1,64,bc,1e)),HX_("MUSIC",85,08,49,8e)))) {
HXLINE(  73)				_hx_tmp = ::openfl::utils::Assets_obj::exists(::StringTools_obj::replace(this->leSource,HX_(".webm",87,0c,64,cb),HX_(".ogg",e1,64,bc,1e)),HX_("SOUND",af,c4,ba,fe));
            			}
            			else {
HXLINE(  73)				_hx_tmp = true;
            			}
HXDLIN(  73)			if (_hx_tmp) {
HXLINE(  75)				this->useSound = true;
HXLINE(  76)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  76)				this->vidSound = _hx_tmp->play(::StringTools_obj::replace(this->leSource,HX_(".webm",87,0c,64,cb),HX_(".ogg",e1,64,bc,1e)),null(),null(),null(),null(),null());
            			}
            		}
HXLINE(  80)		::GlobalVideo_obj::get()->__Field(HX_("source",db,b0,31,32),::hx::paccDynamic)(this->leSource);
HXLINE(  81)		::GlobalVideo_obj::get()->__Field(HX_("clearPause",29,16,62,92),::hx::paccDynamic)();
HXLINE(  82)		if (::GlobalVideo_obj::isWebm) {
HXLINE(  84)			::GlobalVideo_obj::get()->__Field(HX_("updatePlayer",4a,92,7c,37),::hx::paccDynamic)();
            		}
HXLINE(  86)		::GlobalVideo_obj::get()->__Field(HX_("show",fd,d4,52,4c),::hx::paccDynamic)();
HXLINE(  87)		if (::GlobalVideo_obj::isWebm) {
HXLINE(  89)			::GlobalVideo_obj::get()->__Field(HX_("restart",cf,c7,a5,6a),::hx::paccDynamic)();
            		}
            		else {
HXLINE(  91)			::GlobalVideo_obj::get()->__Field(HX_("play",f4,2d,5a,4a),::hx::paccDynamic)();
            		}
HXLINE( 100)		this->vidSound->set_time((this->vidSound->_length * this->soundMultiplier));
HXLINE( 108)		this->doShit = true;
            	}


void VideoState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_db9755626f9b4c83_114_update)
HXLINE( 115)		this->super::update(elapsed);
HXLINE( 117)		if (this->useSound) {
HXLINE( 119)			bool wasFuckingHit = ( (bool)( ::Dynamic(::GlobalVideo_obj::get()->__Field(HX_("webm",59,5d,f5,4e),::hx::paccDynamic))->__Field(HX_("wasHitOnce",4b,03,49,ae),::hx::paccDynamic)) );
HXLINE( 120)			this->soundMultiplier = (( (Float)( ::Dynamic(::GlobalVideo_obj::get()->__Field(HX_("webm",59,5d,f5,4e),::hx::paccDynamic))->__Field(HX_("renderedCount",5a,ef,d4,6f),::hx::paccDynamic)) ) / ( (Float)(this->videoFrames) ));
HXLINE( 122)			if ((this->soundMultiplier > 1)) {
HXLINE( 124)				this->soundMultiplier = ( (Float)(1) );
            			}
HXLINE( 126)			if ((this->soundMultiplier < 0)) {
HXLINE( 128)				this->soundMultiplier = ( (Float)(0) );
            			}
HXLINE( 130)			if (this->doShit) {
HXLINE( 132)				Float compareShit = ( (Float)(50) );
HXLINE( 133)				bool _hx_tmp;
HXDLIN( 133)				if (!((this->vidSound->_time >= ((this->vidSound->_length * this->soundMultiplier) + compareShit)))) {
HXLINE( 133)					_hx_tmp = (this->vidSound->_time <= ((this->vidSound->_length * this->soundMultiplier) - compareShit));
            				}
            				else {
HXLINE( 133)					_hx_tmp = true;
            				}
HXDLIN( 133)				if (_hx_tmp) {
HXLINE( 134)					this->vidSound->set_time((this->vidSound->_length * this->soundMultiplier));
            				}
            			}
HXLINE( 136)			if (wasFuckingHit) {
HXLINE( 138)				if ((this->soundMultiplier == 0)) {
HXLINE( 140)					if ((this->prevSoundMultiplier != 0)) {
HXLINE( 142)						this->vidSound->pause();
HXLINE( 143)						this->vidSound->set_time(( (Float)(0) ));
            					}
            				}
            				else {
HXLINE( 146)					if ((this->prevSoundMultiplier == 0)) {
HXLINE( 148)						this->vidSound->resume();
HXLINE( 149)						this->vidSound->set_time((this->vidSound->_length * this->soundMultiplier));
            					}
            				}
HXLINE( 152)				this->prevSoundMultiplier = this->soundMultiplier;
            			}
            		}
HXLINE( 156)		if (this->notDone) {
HXLINE( 158)			::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
            		}
HXLINE( 160)		::GlobalVideo_obj::get()->__Field(HX_("update",09,86,05,87),::hx::paccDynamic)(elapsed);
HXLINE( 162)		if (::PlayerSettings_obj::player1->controls->_reset->check()) {
HXLINE( 164)			::GlobalVideo_obj::get()->__Field(HX_("restart",cf,c7,a5,6a),::hx::paccDynamic)();
            		}
HXLINE( 167)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 167)		if (_this->keyManager->checkStatus(80,_this->status)) {
HXLINE( 169)			this->txt->set_text(this->pauseText);
HXLINE( 170)			::haxe::Log_obj::trace(HX_("PRESSED PAUSE",b8,0e,d3,d0),::hx::SourceInfo(HX_("source/VideoState.hx",54,69,0b,bf),170,HX_("VideoState",b6,b7,8a,56),HX_("update",09,86,05,87)));
HXLINE( 171)			::GlobalVideo_obj::get()->__Field(HX_("togglePause",c2,8e,1e,e5),::hx::paccDynamic)();
HXLINE( 172)			if (( (bool)(::GlobalVideo_obj::get()->__Field(HX_("paused",ae,40,84,ef),::hx::paccDynamic)) )) {
HXLINE( 174)				::GlobalVideo_obj::get()->__Field(HX_("alpha",5e,a7,96,21),::hx::paccDynamic)();
            			}
            			else {
HXLINE( 176)				::GlobalVideo_obj::get()->__Field(HX_("unalpha",65,9e,27,1e),::hx::paccDynamic)();
HXLINE( 177)				this->txt->set_text(this->defaultText);
            			}
            		}
HXLINE( 181)		bool _hx_tmp;
HXDLIN( 181)		bool _hx_tmp1;
HXDLIN( 181)		if (!(::PlayerSettings_obj::player1->controls->_accept->check())) {
HXLINE( 181)			_hx_tmp1 = ( (bool)(::GlobalVideo_obj::get()->__Field(HX_("ended",fa,48,7a,70),::hx::paccDynamic)) );
            		}
            		else {
HXLINE( 181)			_hx_tmp1 = true;
            		}
HXDLIN( 181)		if (!(_hx_tmp1)) {
HXLINE( 181)			_hx_tmp = ( (bool)(::GlobalVideo_obj::get()->__Field(HX_("stopped",0d,d2,61,43),::hx::paccDynamic)) );
            		}
            		else {
HXLINE( 181)			_hx_tmp = true;
            		}
HXDLIN( 181)		if (_hx_tmp) {
HXLINE( 183)			this->txt->set_visible(false);
HXLINE( 184)			::GlobalVideo_obj::get()->__Field(HX_("hide",c2,34,0e,45),::hx::paccDynamic)();
HXLINE( 185)			::GlobalVideo_obj::get()->__Field(HX_("stop",02,f0,5b,4c),::hx::paccDynamic)();
            		}
HXLINE( 188)		bool _hx_tmp2;
HXDLIN( 188)		if (!(::PlayerSettings_obj::player1->controls->_accept->check())) {
HXLINE( 188)			_hx_tmp2 = ( (bool)(::GlobalVideo_obj::get()->__Field(HX_("ended",fa,48,7a,70),::hx::paccDynamic)) );
            		}
            		else {
HXLINE( 188)			_hx_tmp2 = true;
            		}
HXDLIN( 188)		if (_hx_tmp2) {
HXLINE( 190)			this->notDone = false;
HXLINE( 191)			::flixel::FlxG_obj::sound->music->set_volume(this->fuckingVolume);
HXLINE( 192)			this->txt->set_text(this->pauseText);
HXLINE( 193)			::flixel::FlxG_obj::autoPause = true;
HXLINE( 194)			{
HXLINE( 194)				 ::flixel::FlxState nextState = this->transClass;
HXDLIN( 194)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 194)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
HXLINE( 197)		bool _hx_tmp3;
HXDLIN( 197)		if (!(( (bool)(::GlobalVideo_obj::get()->__Field(HX_("played",53,eb,b8,37),::hx::paccDynamic)) ))) {
HXLINE( 197)			_hx_tmp3 = ( (bool)(::GlobalVideo_obj::get()->__Field(HX_("restarted",ee,f1,82,b5),::hx::paccDynamic)) );
            		}
            		else {
HXLINE( 197)			_hx_tmp3 = true;
            		}
HXDLIN( 197)		if (_hx_tmp3) {
HXLINE( 199)			::GlobalVideo_obj::get()->__Field(HX_("show",fd,d4,52,4c),::hx::paccDynamic)();
            		}
HXLINE( 202)		::GlobalVideo_obj::get()->__SetField(HX_("restarted",ee,f1,82,b5),false,::hx::paccDynamic);
HXLINE( 203)		::GlobalVideo_obj::get()->__SetField(HX_("played",53,eb,b8,37),false,::hx::paccDynamic);
HXLINE( 204)		::GlobalVideo_obj::get()->__SetField(HX_("stopped",0d,d2,61,43),false,::hx::paccDynamic);
HXLINE( 205)		::GlobalVideo_obj::get()->__SetField(HX_("ended",fa,48,7a,70),false,::hx::paccDynamic);
            	}



::hx::ObjectPtr< VideoState_obj > VideoState_obj::__new(::String source, ::flixel::FlxState toTrans) {
	::hx::ObjectPtr< VideoState_obj > __this = new VideoState_obj();
	__this->__construct(source,toTrans);
	return __this;
}

::hx::ObjectPtr< VideoState_obj > VideoState_obj::__alloc(::hx::Ctx *_hx_ctx,::String source, ::flixel::FlxState toTrans) {
	VideoState_obj *__this = (VideoState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VideoState_obj), true, "VideoState"));
	*(void **)__this = VideoState_obj::_hx_vtable;
	__this->__construct(source,toTrans);
	return __this;
}

VideoState_obj::VideoState_obj()
{
}

void VideoState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VideoState);
	HX_MARK_MEMBER_NAME(leSource,"leSource");
	HX_MARK_MEMBER_NAME(transClass,"transClass");
	HX_MARK_MEMBER_NAME(txt,"txt");
	HX_MARK_MEMBER_NAME(fuckingVolume,"fuckingVolume");
	HX_MARK_MEMBER_NAME(notDone,"notDone");
	HX_MARK_MEMBER_NAME(vidSound,"vidSound");
	HX_MARK_MEMBER_NAME(useSound,"useSound");
	HX_MARK_MEMBER_NAME(soundMultiplier,"soundMultiplier");
	HX_MARK_MEMBER_NAME(prevSoundMultiplier,"prevSoundMultiplier");
	HX_MARK_MEMBER_NAME(videoFrames,"videoFrames");
	HX_MARK_MEMBER_NAME(defaultText,"defaultText");
	HX_MARK_MEMBER_NAME(doShit,"doShit");
	HX_MARK_MEMBER_NAME(pauseText,"pauseText");
	 ::MusicBeatState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VideoState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(leSource,"leSource");
	HX_VISIT_MEMBER_NAME(transClass,"transClass");
	HX_VISIT_MEMBER_NAME(txt,"txt");
	HX_VISIT_MEMBER_NAME(fuckingVolume,"fuckingVolume");
	HX_VISIT_MEMBER_NAME(notDone,"notDone");
	HX_VISIT_MEMBER_NAME(vidSound,"vidSound");
	HX_VISIT_MEMBER_NAME(useSound,"useSound");
	HX_VISIT_MEMBER_NAME(soundMultiplier,"soundMultiplier");
	HX_VISIT_MEMBER_NAME(prevSoundMultiplier,"prevSoundMultiplier");
	HX_VISIT_MEMBER_NAME(videoFrames,"videoFrames");
	HX_VISIT_MEMBER_NAME(defaultText,"defaultText");
	HX_VISIT_MEMBER_NAME(doShit,"doShit");
	HX_VISIT_MEMBER_NAME(pauseText,"pauseText");
	 ::MusicBeatState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val VideoState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"txt") ) { return ::hx::Val( txt ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"doShit") ) { return ::hx::Val( doShit ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"notDone") ) { return ::hx::Val( notDone ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"leSource") ) { return ::hx::Val( leSource ); }
		if (HX_FIELD_EQ(inName,"vidSound") ) { return ::hx::Val( vidSound ); }
		if (HX_FIELD_EQ(inName,"useSound") ) { return ::hx::Val( useSound ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pauseText") ) { return ::hx::Val( pauseText ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"transClass") ) { return ::hx::Val( transClass ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"videoFrames") ) { return ::hx::Val( videoFrames ); }
		if (HX_FIELD_EQ(inName,"defaultText") ) { return ::hx::Val( defaultText ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fuckingVolume") ) { return ::hx::Val( fuckingVolume ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"soundMultiplier") ) { return ::hx::Val( soundMultiplier ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"prevSoundMultiplier") ) { return ::hx::Val( prevSoundMultiplier ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VideoState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"txt") ) { txt=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"doShit") ) { doShit=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"notDone") ) { notDone=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"leSource") ) { leSource=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vidSound") ) { vidSound=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"useSound") ) { useSound=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pauseText") ) { pauseText=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"transClass") ) { transClass=inValue.Cast<  ::flixel::FlxState >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"videoFrames") ) { videoFrames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultText") ) { defaultText=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"fuckingVolume") ) { fuckingVolume=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"soundMultiplier") ) { soundMultiplier=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"prevSoundMultiplier") ) { prevSoundMultiplier=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VideoState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("leSource",34,24,06,f0));
	outFields->push(HX_("transClass",f0,be,25,72));
	outFields->push(HX_("txt",70,6e,58,00));
	outFields->push(HX_("fuckingVolume",c5,2f,0e,74));
	outFields->push(HX_("notDone",35,7b,98,37));
	outFields->push(HX_("vidSound",3e,61,38,7b));
	outFields->push(HX_("useSound",08,ef,37,48));
	outFields->push(HX_("soundMultiplier",30,31,16,c6));
	outFields->push(HX_("prevSoundMultiplier",7d,43,40,07));
	outFields->push(HX_("videoFrames",81,46,2d,25));
	outFields->push(HX_("defaultText",0e,c6,b8,1e));
	outFields->push(HX_("doShit",eb,74,56,1c));
	outFields->push(HX_("pauseText",c3,82,60,51));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VideoState_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(VideoState_obj,leSource),HX_("leSource",34,24,06,f0)},
	{::hx::fsObject /*  ::flixel::FlxState */ ,(int)offsetof(VideoState_obj,transClass),HX_("transClass",f0,be,25,72)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(VideoState_obj,txt),HX_("txt",70,6e,58,00)},
	{::hx::fsFloat,(int)offsetof(VideoState_obj,fuckingVolume),HX_("fuckingVolume",c5,2f,0e,74)},
	{::hx::fsBool,(int)offsetof(VideoState_obj,notDone),HX_("notDone",35,7b,98,37)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(VideoState_obj,vidSound),HX_("vidSound",3e,61,38,7b)},
	{::hx::fsBool,(int)offsetof(VideoState_obj,useSound),HX_("useSound",08,ef,37,48)},
	{::hx::fsFloat,(int)offsetof(VideoState_obj,soundMultiplier),HX_("soundMultiplier",30,31,16,c6)},
	{::hx::fsFloat,(int)offsetof(VideoState_obj,prevSoundMultiplier),HX_("prevSoundMultiplier",7d,43,40,07)},
	{::hx::fsInt,(int)offsetof(VideoState_obj,videoFrames),HX_("videoFrames",81,46,2d,25)},
	{::hx::fsString,(int)offsetof(VideoState_obj,defaultText),HX_("defaultText",0e,c6,b8,1e)},
	{::hx::fsBool,(int)offsetof(VideoState_obj,doShit),HX_("doShit",eb,74,56,1c)},
	{::hx::fsString,(int)offsetof(VideoState_obj,pauseText),HX_("pauseText",c3,82,60,51)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VideoState_obj_sStaticStorageInfo = 0;
#endif

static ::String VideoState_obj_sMemberFields[] = {
	HX_("leSource",34,24,06,f0),
	HX_("transClass",f0,be,25,72),
	HX_("txt",70,6e,58,00),
	HX_("fuckingVolume",c5,2f,0e,74),
	HX_("notDone",35,7b,98,37),
	HX_("vidSound",3e,61,38,7b),
	HX_("useSound",08,ef,37,48),
	HX_("soundMultiplier",30,31,16,c6),
	HX_("prevSoundMultiplier",7d,43,40,07),
	HX_("videoFrames",81,46,2d,25),
	HX_("defaultText",0e,c6,b8,1e),
	HX_("doShit",eb,74,56,1c),
	HX_("pauseText",c3,82,60,51),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class VideoState_obj::__mClass;

void VideoState_obj::__register()
{
	VideoState_obj _hx_dummy;
	VideoState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("VideoState",b6,b7,8a,56);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VideoState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VideoState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VideoState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VideoState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

