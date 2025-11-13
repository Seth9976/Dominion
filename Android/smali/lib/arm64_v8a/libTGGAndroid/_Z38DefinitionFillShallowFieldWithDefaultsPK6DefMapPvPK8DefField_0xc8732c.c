// 函数: _Z38DefinitionFillShallowFieldWithDefaultsPK6DefMapPvPK8DefField
// 地址: 0xc8732c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8_1 = zx.q(*(arg1 + 0x18) - 1)

if (x8_1.d u<= 0xf)
    switch (x8_1)
        case 0, 3
            *arg2 = (*(arg3 + 0x48)).d
            return 
        case 1
            *arg2 = (*(arg3 + 0x48)).w
            return 
        case 2
            *arg2 = (*(arg3 + 0x48)).b
            return 
        case 9
            if (*(arg3 + 0x48) == 0)
                *arg2 = 0
                return 
            
            *arg2 = 1
            return 
        case 0xd
            *arg2 = zx.q(*(arg3 + 0x48))
            return 
        case 0xe
            char* x8_7 = *(arg3 + 0x48)
            uint64_t x1 = zx.q(*(arg3 + 0x40))
            char* x20
            
            x20 = x8_7 == 0 ? &data_793a18 : x8_7
            
            if (x1.d == 0)
                if (zx.d(*x20) == 0)
                    *arg2 = 0
                    return 
                
                x1 = zx.q(AssetTypeFromPath(x20))
            
            *arg2 = AssetPtrFromPath(x20, x1)
            return 
        case 0xf
            *arg2 = 0

pthread_kill(pthread_self(), 6)
void* x0_6
DefField* x1_1
x0_6, x1_1 = XNoReturn()
return DefinitionFillStringFieldWithDefaults(x0_6, x1_1) __tailcall
