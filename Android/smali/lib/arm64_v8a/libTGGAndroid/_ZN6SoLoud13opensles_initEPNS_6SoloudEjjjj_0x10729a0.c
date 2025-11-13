// 函数: _ZN6SoLoud13opensles_initEPNS_6SoloudEjjjj
// 地址: 0x10729a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = operator new(0x90)
uint64_t x8 = zx.q(arg5 * arg4)
__builtin_memset(&x0[0xc], 0, 0x20)
x0[0xc].d = arg4
*(x0 + 0x64) = arg5
uint64_t x24_1 = x8 << 1
__builtin_memset(x0, 0, 0x60)
*(x0 + 0x80) = zx.o(0)
int64_t x23_1 = sx.q(x8.d << 1)
int64_t x0_2 = operator new[](x24_1)
x0[0xd] = x0_2
memset(x0_2, 0, x23_1)
int64_t x0_4 = operator new[](x24_1)
x0[0xe] = x0_4
memset(x0_4, 0, x23_1)
int64_t var_38 = 0x100000001
char const* const x2_3

if (slCreateEngine(x0, 1, &var_38, 0, 0, 0) == 0)
    int64_t* x0_7 = *x0
    (**x0_7)(x0_7, 0)
    int64_t* x0_8 = *x0
    
    if ((*(*x0_8 + 0x18))(x0_8, *SL_IID_ENGINE, &x0[1]) == 0)
        int64_t* x0_10 = x0[1]
        int32_t var_4c = 0
        int64_t x23_2 = *SL_IID_VOLUME
        int64_t var_48 = x23_2
        
        if ((*(*x0_10 + 0x38))(x0_10, &x0[2], 1, &var_48, &var_4c) == 0)
            int64_t* x0_13 = x0[2]
            (**x0_13)(x0_13, 0)
            int64_t* x0_14 = x0[2]
            int32_t x0_15
            int128_t v0_1
            x0_15, v0_1 = (*(*x0_14 + 0x18))(x0_14, x23_2, &x0[3])
            
            if (x0_15 != 0)
                __android_log_print(4, "SoLoud", "Failed to get output mix volume interface.")
            
            v0_1.q = 0x2800007bd
            *(x0 + 0x84) = 0x2800007bd
            void* var_78 = x0 + 0x84
            int32_t var_68
            int32_t* var_70_1 = &var_68
            int32_t x8_13 = *(x0 + 0x64)
            x0[4].d = 4
            int64_t* x0_16 = x0[1]
            int64_t x12_1 = x0[2]
            var_68 = 2
            int32_t var_64_1 = x8_13
            int32_t var_60_1 = arg3 * 0x3e8
            x0[5] = x12_1
            v0_1.d = 0x10
            v0_1:4.d = 0x10
            int64_t x24_2 = *SL_IID_ANDROIDSIMPLEBUFFERQUEUE
            int32_t x8_14
            
            x8_14 = x8_13 != 2 ? 4 : 3
            
            int32_t var_54_1 = x8_14
            int32_t var_50_1 = 2
            int64_t var_5c_1 = 0x1000000010
            x0[6] = &x0[4]
            x0[7] = 0
            int64_t var_88 = x23_2
            int64_t var_80_1 = x24_2
            int64_t var_90 = 0x100000001
            (*(*x0_16 + 0x10))(x0_16, &x0[8], &var_78, &x0[6], 2, &var_88, &var_90, v0_1)
            int64_t* x0_17 = x0[8]
            (**x0_17)(x0_17, 0)
            int64_t* x0_18 = x0[8]
            (*(*x0_18 + 0x18))(x0_18, *SL_IID_PLAY, &x0[9])
            int64_t* x0_19 = x0[8]
            (*(*x0_19 + 0x18))(x0_19, x23_2, &x0[0xa])
            int64_t* x0_20 = x0[8]
            (*(*x0_20 + 0x18))(x0_20, x24_2, &x0[0xb])
            *arg1 = x0
            int64_t* x0_21 = x0[9]
            (*(*x0_21 + 0x20))(x0_21, &data_1072d18, arg1)
            int64_t* x0_22 = x0[9]
            (*(*x0_22 + 0x28))(x0_22, 1)
            int64_t* x0_23 = x0[9]
            (**x0_23)(x0_23, 3)
            SoLoud::Soloud::postinit_internal(arg1.d, arg3, x0[0xc].d, arg2)
            *(arg1 + 0x18) = SoLoud::soloud_opensles_deinit
            __android_log_print(4, "SoLoud", "Creating audio thread.")
            SoLoud::Thread::createThread(sub_1072d34, arg1)
            *(arg1 + 0x20a8) = "OpenSL ES"
            return 0
        
        x2_3 = "Failed to create output mix object."
    else
        x2_3 = "Failed to get engine interface."
else
    x2_3 = "Failed to create engine."

__android_log_print(6, "SoLoud", x2_3)
return 7
