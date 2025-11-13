// 函数: _Z11DrawModeSet8DrawMode
// 地址: 0xc9e9f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x8 = *gDrawMode

if (x8 == arg1.d)
    return 

uint32_t x19_1 = arg1.d

if (x8 == 0)
    goto label_c9ea30

if (x8 == 2)
    Draw3DEnd()
    
    if (x19_1 != 0)
        goto label_c9ea40
else
    if (x8 != 1)
    label_c9ea74:
        pthread_kill(pthread_self(), 6)
        uint8_t* x0_1
        uint64_t x1
        x0_1, x1 = XNoReturn()
        return Botan::Adler32::add_data(x0_1, x1) __tailcall
    
    SpriteDrawEnd()
label_c9ea30:
    
    if (x19_1 != 0)
    label_c9ea40:
        
        if (x19_1 == 1)
            SpriteDrawBegin()
        else
            if (x19_1 != 2)
                goto label_c9ea74
            
            Draw3DBegin()

*gDrawMode = x19_1
