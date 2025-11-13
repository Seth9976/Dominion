// 函数: _ZN20SoLoudSoundInterface20SoundInterfaceAttachEv
// 地址: 0x106c320
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x20 = *(entry_x0 + 8)

if (x20 == 0)
    x20 = XPooledCalloc(0x21e58)
    SoLoud::Soloud::Soloud()
    *(entry_x0 + 8) = x20

int32_t var_30 = 0
int32_t var_2c = 6
int64_t var_28 = 0
int32_t var_48 = 0
int32_t var_44
__builtin_memcpy(&var_44, 
    "\x04\x00\x00\x00\x44\xac\x00\x00\x06\x00\x00\x00\x80\xbb\x00\x00\x06\x00\x00\x00", 0x14)
int32_t var_50 = 0xac44
int32_t var_4c = 4
int32_t* x8
int32_t* x9

if (SoLoud::Soloud::init(x20.d, 1, 0, 0, 0) == 0)
    x8 = &var_28
    x9 = &var_28:4
else
    XTraceAndLog("Sound failed to init (%d, %d) error:%d")
    
    if (SoLoud::Soloud::init((*(entry_x0 + 8)).d, 1, 6, 0, 0) == 0)
        x8 = &var_30
        x9 = &var_2c
    else
        XTraceAndLog("Sound failed to init (%d, %d) error:%d")
        
        if (SoLoud::Soloud::init((*(entry_x0 + 8)).d, 1, 6, 0xbb80, 0) == 0)
            int32_t var_38
            x8 = &var_38
            int32_t var_34
            x9 = &var_34
        else
            XTraceAndLog("Sound failed to init (%d, %d) error:%d")
            
            if (SoLoud::Soloud::init((*(entry_x0 + 8)).d, 1, 6, 0xac44, 0) == 0)
                int32_t var_40
                x8 = &var_40
                int32_t var_3c
                x9 = &var_3c
            else
                XTraceAndLog("Sound failed to init (%d, %d) error:%d")
                
                if (SoLoud::Soloud::init((*(entry_x0 + 8)).d, 1, 4, 0, 0) == 0)
                    x8 = &var_48
                    x9 = &var_44
                else
                    XTraceAndLog("Sound failed to init (%d, %d) error:%d")
                    
                    if (SoLoud::Soloud::init((*(entry_x0 + 8)).d, 1, 4, 0xac44, 0) != 0)
                        int64_t result = XTraceAndLog("Sound failed to init (%d, %d) error:%d")
                        *(entry_x0 + 0x10) = 0
                        return result
                    
                    x8 = &var_50
                    x9 = &var_4c

*(entry_x0 + 0x10) = 1
*x9
*x8
return XTraceAndLog("Sound initialized (%d, %d)")
