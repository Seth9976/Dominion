// 函数: sub_4b7bc0
// 地址: 0x4b7bc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
bool cond:0 = data_147aba1 != 0
uint32_t result = 0xff000000
data_cf65f8 = 0xff000000
char const* const var_ac
int32_t var_a8
char const* const var_a4
char* ecx_22

if (cond:0)
    int128_t xmm0_1 = data_7fefb0
    __builtin_strncpy(&data_cf6aa0, "333?", 4)
    data_cf6a90 = xmm0_1
    int128_t var_60
    int128_t* eax_2 = sub_6836a0(&var_60)
    int128_t var_40 = *eax_2
    int128_t var_30_1 = eax_2[1]
    sub_683220(&var_40)
    
    if (data_cc8d6c == 0)
        if (data_19e3984 == 0)
            if (data_1597cd4 == 2)
                data_1597cd4 = 1
            
            for (int32_t i = 0; i s< 0x1b8; i += 0x28)
                int32_t ecx_6 = *(i + &data_8db5b0)
                
                if (ecx_6 != 0)
                    sub_664d00(sub_64e7a0(ecx_6))
                    int32_t eax_8 = *(sub_4d3b00(*(i + &data_8db5ac)) + 0x10)
                    
                    if (eax_8 != 0)
                        eax_8(*(i + &data_8db5b0))
                
                int32_t ecx_9 = *(i + &data_8db5a0)
                
                if (ecx_9 != 0)
                    sub_664d00(sub_64e7a0(ecx_9))
                    int32_t eax_11 = *(sub_4d3b00(*(i + &data_8db59c)) + 0x10)
                    
                    if (eax_11 != 0)
                        eax_11(*(i + &data_8db5a0))
        
        if (data_8c4156 != 0)
            if (data_b809dc != 0)
                int32_t ecx_12 = data_be2250
                
                if (ecx_12 != 0)
                    sub_664d00(sub_64e7a0(ecx_12))
                
                sub_5e9350()
            
            if (data_ccf768 != 0)
                int32_t eax_13 = data_cd3188
                int32_t esi_2 = 0
                
                if (eax_13 s> 0)
                    void* edi_1 = &data_ccf78c
                    
                    do
                        int32_t ecx_14 = *edi_1
                        
                        if (ecx_14 != 0)
                            sub_664d00(sub_64e7a0(ecx_14))
                            eax_13 = data_cd3188
                        
                        esi_2 += 1
                        edi_1 += 0x74
                    while (esi_2 s< eax_13)
            
            sub_4ad900(data_be1538)
            sub_4ad900(data_be153c)
            sub_6204a0()
    else
        TEB* fsbase
        void* esi_1 = *fsbase->ThreadLocalStoragePointer
        
        if (data_19e3ca0 s> *(esi_1 + 8))
            sub_75970e(&data_19e3ca0)
            
            if (data_19e3ca0 == 0xffffffff)
                data_19e3ca4.o = data_893690
                __Init_thread_footer(&data_19e3ca0)
        
        if (data_19e3cb4 s> *(esi_1 + 8))
            sub_75970e(&data_19e3cb4)
            
            if (data_19e3cb4 == 0xffffffff)
                data_19e3cb8 = 0x3fc00000
                data_19e3cbc = 0
                __Init_thread_footer(&data_19e3cb4)
        
        float xmm2_4 = data_8c4634 * 500f f* data_8c4634 f+ data_19e3cbc
        float var_90 = data_19e3cb8 f+ data_19e3ca4
        float xmm0_8 = data_19e3ca8 + xmm2_4
        data_19e3cbc = xmm2_4
        float var_8c_1 = xmm0_8
        float var_88_1 = data_19e3cac f+ data_19e3cb8
        float var_84_1 = data_19e3cb0 + xmm2_4
        data_19e3ca4.o = var_90.o
        sub_682f00(&data_19e3ca4, &data_7e5d1c)
        float xmm5_1 = data_19e3ca4
        float xmm2_5 = data_19e3ca8
        float xmm4_1 = data_19e3cb0
        var_90 = xmm5_1
        float xmm5_2 = xmm5_1 + 1f
        float var_8c_2 = xmm2_5
        float var_84_2 = xmm4_1
        float var_88_2 = xmm5_2
        int128_t var_70 = var_90.o
        float xmm0_15 = data_19e3cac
        float var_88_3 = xmm0_15
        float xmm1_2 = xmm0_15 - 1f
        float var_8c_3 = xmm2_5
        float var_84_3 = xmm4_1
        var_90 = xmm1_2
        float var_8c_4 = xmm2_5
        var_60 = var_90.o
        var_90 = xmm5_2
        float var_88_4 = xmm1_2
        float var_84_4 = xmm2_5 + 1f
        var_40 = var_90.o
        var_90 = xmm5_2
        float var_88_5 = xmm1_2
        float var_84_5 = xmm4_1
        float var_8c_5 = xmm4_1 - 1f
        var_90.o = var_90.o
        sub_682f00(&var_70, &data_7e43e4)
        sub_682f00(&var_60, &data_7e43e4)
        sub_682f00(&var_40, &data_7e43e4)
        sub_682f00(&var_90, &data_7e43e4)
    
    result = data_147b06c
    *(result + 0x2dc) = 0
    __builtin_memcpy(result + 0x124, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x"
    "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00", 
        0x41)
    sub_649d30()
    result.b = data_147aba1
    
    if (result.b != 0)
        int32_t ecx_18 = data_cf6b14
        int32_t i_1 = 0
        data_cf6b14 = 0x2de60000
        
        if (data_b80a70 s> 0)
            void* edx_1 = data_147abe8
            
            do
                if (edx_1 == 0)
                    var_a4 = "GetGameData"
                    var_a8 = 0x45
                    var_ac = "C:\x\ax2017\Engine\Game.h"
                    ecx_22 = "gpGameData"
                    goto label_4b809b
                
                result = *((i_1 << 2) + &data_b80a30)
                void* edi_2 = *(edx_1 + 0x10)
                
                if (result != 0)
                    uint32_t ecx_19 = zx.d(result.w)
                    
                    if (ecx_19 u< *(edi_2 + 4))
                        void* ecx_21 = ecx_19 * 0x7c + *edi_2
                        
                        if (*(ecx_21 + 0x78) == result && ecx_21 != 0)
                            result = sub_6c24d0(ecx_21, &data_bf21e8)
                            edx_1 = data_147abe8
                
                i_1 += 1
            while (i_1 s< data_b80a70)
            
            result.b = data_147aba1
        
        if (result.b != 0)
            data_cf6b14 = ecx_18
            CookieCheckFunction(result)
            return result
    
    var_a4 = "Draw3DLayer"
    var_a8 = 0x32c
else
    var_a4 = "Draw3DAmbientLight"
    var_a8 = 0x336

var_ac = "C:\x\ax2017\Engine\Draw3d.cpp"
ecx_22 = "gDraw3DData.submittingRenderItems"
label_4b809b:
sub_63b870(result, &data_801800, ecx_22, var_ac, var_a8, var_a4)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
