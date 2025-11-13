// 函数: _Z12PropGraphSetI10ColorRgbaIE9PropGraphIT_ERK13UI2EvalResult
// 地址: 0x10178d8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x8
__builtin_memset(entry_x8, 0, 0x3c)
entry_x8[0xd] = 0xffffffff
float v0
float v1
float v2
float v3
float v4
float v5
float v6
int32_t v7

if (*(arg1 + 4) != 1)
    entry_x8[0xc] = 1
    int32_t x9_1 = *arg1
    uint32_t x9_3
    
    if (x9_1 == 7)
        v3 = *(arg1 + 0x18)
        v4 = *(arg1 + 0x1c)
        v5 = float.s(0x437f0000)
        v0 = 0f
        float temp0_17 = vmin_f32(v3, v5)
        
        v3 = v3 < 0f ? v0 : temp0_17
        
        v1 = fconvert.s(0.5f)
        v2 = fconvert.s(-0.5f)
        
        v6 = v3 < 0f ? v2 : v1
        
        v3 = v3 + v6
        v6 = *(arg1 + 0x20)
        v7 = *(arg1 + 0x24)
        float temp0_18 = vmin_f32(v4, v5)
        
        v4 = v4 < 0f ? v0 : temp0_18
        
        uint32_t temp0_19 = vcvts_s32_f32(v3)
        
        v3 = v4 < 0f ? v2 : v1
        
        float temp0_20 = vmin_f32(v6, v5)
        
        v6 = v6 < 0f ? v0 : temp0_20
        
        float temp0_21 = vmin_f32(v7, v5)
        char temp0_22 = vcvts_s32_f32(v4 + v3)
        
        v3 = v6 < 0f ? v2 : v1
        
        v4 = v7 f< 0f ? v0 : temp0_21
        
        char temp0_23 = vcvts_s32_f32(v6 + v3)
        
        v3 = v4 < 0f ? v2 : v1
        
        *entry_x8 = (0xffffff & ((0xff00ffff & ((0xffff00ff & temp0_19) | zx.d(temp0_22) << 8))
            | zx.d(temp0_23) << 0x10)) | zx.d(vcvts_s32_f32(v4 + v3)) << 0x18
        v3 = *(arg1 + 0x30)
        v4 = *(arg1 + 0x34)
        float temp0_25 = vmin_f32(v3, v5)
        
        v3 = v3 < 0f ? v0 : temp0_25
        
        v6 = v3 < 0f ? v2 : v1
        
        v3 = v3 + v6
        v6 = *(arg1 + 0x38)
        v7 = *(arg1 + 0x3c)
        float temp0_26 = vmin_f32(v4, v5)
        
        v4 = v4 < 0f ? v0 : temp0_26
        
        uint32_t temp0_27 = vcvts_s32_f32(v3)
        
        v3 = v4 < 0f ? v2 : v1
        
        v3 = v4 + v3
        float temp0_28 = vmin_f32(v6, v5)
        
        v4 = v6 < 0f ? v0 : temp0_28
        
        float temp0_29 = vmin_f32(v7, v5)
        char temp0_30 = vcvts_s32_f32(v3)
        
        v3 = v4 < 0f ? v2 : v1
        
        if (not(v7 f< 0f))
            v0 = temp0_29
        
        if (v0 < 0f)
            v1 = v2
        
        x9_3 = (0xffffff & ((0xff00ffff & ((0xffff00ff & temp0_27) | zx.d(temp0_30) << 8))
            | zx.d(vcvts_s32_f32(v4 + v3)) << 0x10)) | zx.d(vcvts_s32_f32(v0 + v1)) << 0x18
    else if (x9_1 != 8)
        x9_3 = *gRgbaIWhite
        *entry_x8 = x9_3
    else
        *entry_x8 = *(arg1 + 0x18)
        x9_3 = *(arg1 + 0x30)
    
    entry_x8[1] = x9_3
else
    uint64_t x11_1 = zx.q(*(arg1 + 0x88))
    entry_x8[0xc] = x11_1.d
    
    if (x11_1.d s>= 1)
        int32_t x10_1 = *arg1
        int64_t i = 0
        uint32_t x12_1 = *gRgbaIWhite
        v0 = 0f
        v1 = fconvert.s(0.5f)
        v2 = fconvert.s(-0.5f)
        
        do
            void* x14_5 = arg1 + i
            entry_x8[2] = *(x14_5 + 0x40)
            entry_x8[3] = *(x14_5 + 8)
            uint32_t x14_4
            
            if (x10_1 == 7)
                v4 = *(x14_5 + 0x18)
                v5 = *(x14_5 + 0x1c)
                v3 = float.s(0x437f0000)
                float temp0_1 = vmin_f32(v4, v3)
                
                v4 = v4 < 0f ? v0 : temp0_1
                
                v6 = v4 < 0f ? v2 : v1
                
                v4 = v4 + v6
                v6 = *(x14_5 + 0x20)
                v7 = *(x14_5 + 0x24)
                float temp0_2 = vmin_f32(v5, v3)
                
                v5 = v5 < 0f ? v0 : temp0_2
                
                uint32_t temp0_3 = vcvts_s32_f32(v4)
                
                v4 = v5 < 0f ? v2 : v1
                
                float temp0_4 = vmin_f32(v6, v3)
                
                v6 = v6 < 0f ? v0 : temp0_4
                
                float temp0_5 = vmin_f32(v7, v3)
                char temp0_6 = vcvts_s32_f32(v5 + v4)
                
                v4 = v6 < 0f ? v2 : v1
                
                v5 = v7 f< 0f ? v0 : temp0_5
                
                char temp0_7 = vcvts_s32_f32(v6 + v4)
                
                v4 = v5 < 0f ? v2 : v1
                
                *entry_x8 = (0xffffff & ((0xff00ffff
                    & ((0xffff00ff & temp0_3) | zx.d(temp0_6) << 8)) | zx.d(temp0_7) << 0x10))
                    | zx.d(vcvts_s32_f32(v5 + v4)) << 0x18
                v4 = *(x14_5 + 0x30)
                v5 = *(x14_5 + 0x34)
                float temp0_9 = vmin_f32(v4, v3)
                
                v4 = v4 < 0f ? v0 : temp0_9
                
                v6 = v4 < 0f ? v2 : v1
                
                v4 = v4 + v6
                v6 = *(x14_5 + 0x38)
                v7 = *(x14_5 + 0x3c)
                float temp0_10 = vmin_f32(v5, v3)
                
                v5 = v5 < 0f ? v0 : temp0_10
                
                uint32_t temp0_11 = vcvts_s32_f32(v4)
                
                v4 = v5 < 0f ? v2 : v1
                
                v4 = v5 + v4
                float temp0_12 = vmin_f32(v6, v3)
                
                v5 = v6 < 0f ? v0 : temp0_12
                
                float temp0_13 = vmin_f32(v7, v3)
                char temp0_14 = vcvts_s32_f32(v4)
                
                v4 = v5 < 0f ? v2 : v1
                
                v3 = v7 f< 0f ? v0 : temp0_13
                
                char temp0_15 = vcvts_s32_f32(v5 + v4)
                
                v4 = v3 < 0f ? v2 : v1
                
                x14_4 = (0xffffff & ((0xff00ffff & ((0xffff00ff & temp0_11) | zx.d(temp0_14) << 8))
                    | zx.d(temp0_15) << 0x10)) | zx.d(vcvts_s32_f32(v3 + v4)) << 0x18
            else if (x10_1 != 8)
                x14_4 = x12_1
                *entry_x8 = x12_1
            else
                void* x14_6 = arg1 + i
                *entry_x8 = *(x14_6 + 0x18)
                x14_4 = *(x14_6 + 0x30)
            
            i += 0x40
            entry_x8[1] = x14_4
            entry_x8 = &entry_x8[4]
        while (x11_1 << 6 != i)
return arg1
