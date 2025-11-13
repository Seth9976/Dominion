// 函数: sub_69b9c0
// 地址: 0x69b9c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4_1 = ebp
int32_t ecx
int128_t* edx
ecx, edx = __chkstk(0x1b08)
void var_10
uint32_t i = __security_cookie ^ &var_10
uint32_t i_2 = i
char const* const var_24_2
int32_t var_20_1
char const* const var_1c_1
char* ecx_1

if (ecx != 0)
    i = zx.d(ecx.w)
    void* var_4
    void* esi_2
    
    if (i u< data_caf264)
        esi_2 = i * 0x438 + data_caf260
        var_4 = esi_2
    
    if (i u>= data_caf264 || *(esi_2 + 0x434) != ecx)
        var_1c_1 = "DataArray<struct UIState>::DataArrayGet"
        var_20_1 = 0x6d
        ecx_1 = "DataArrayTryToGet(id) != NULL"
        var_24_2 = "C:\x\ax2017\Engine\DataArray.h"
    else
        if (*(esi_2 + 8) != 0)
            CookieCheckFunction(i)
            return i
        
        void arg_24c
        memset(&arg_24c, 0, 0x189c)
        int32_t* ecx_2 = *(esi_2 + 4)
        int128_t arg_1e8
        i = &arg_1e8
        int32_t arg_1ae8 = 1
        arg_1e8 = *edx
        bool cond:0_1 = ecx_2[1] == 0x1e
        int128_t arg_1f8 = edx[1]
        int128_t arg_208 = edx[2]
        int128_t arg_218 = edx[3]
        int128_t arg_228 = edx[4]
        int128_t arg_238 = edx[5]
        int32_t arg_248 = 0xffffffff
        
        if (cond:0_1)
            int32_t* edx_2 = sub_5af880(ecx_2)
            i = 0
            int32_t* arg_4 = edx_2
            uint32_t i_1 = 0
            
            if (edx_2[2] s> 0)
                int32_t ecx_3 = 0
                int32_t var_8_1 = 0
                
                do
                    void* edi_2 = *edx_2 + ecx_3
                    uint32_t eax_2
                    int32_t edx_4
                    eax_2, edx_4 = sub_698630(i, i, esi_2, *(edi_2 + 8))
                    int32_t* esi_3 = eax_2
                    
                    if (*(edi_2 + 4) != 6)
                        int32_t ecx_9 = *esi_3
                        
                        if (esi_3[2] s<= ecx_9)
                            eax_2.b = *(edi_2 + 0x44)
                        else
                            eax_2.b = esi_3[3].b
                        
                        if (eax_2.b == 0 && (esi_3[0x51] s<= ecx_9 || esi_3[0x52].b == eax_2.b))
                            void arg_c8
                            int128_t* eax_9 = sub_698fb0(&arg_c8, edx_4, &arg_1e8, &arg_c8)
                            float xmm1_1[0x4] = *eax_9
                            float arg_128[0x4] = xmm1_1
                            int128_t xmm0_19 = eax_9[1]
                            float xmm1_2 = _mm_shuffle_ps(xmm1_1, xmm1_1, 0xaa)
                            int128_t arg_138 = xmm0_19
                            xmm1_2 f- 0
                            int128_t arg_148 = eax_9[2]
                            int128_t arg_158 = eax_9[3]
                            int128_t arg_168 = eax_9[4]
                            int128_t xmm0_23 = eax_9[5]
                            eax_9:1.b = (xmm1_2 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm1_2, 0f) ? 1 : 0) << 2 | (xmm1_2 < 0f ? 1 : 0)
                            int128_t arg_178 = xmm0_23
                            bool p_2 = unimplemented  {test ah, 0x44}
                            
                            if (p_2)
                                float xmm0_24 = arg_128[3]
                                xmm0_24 f- 0
                                eax_9:1.b = (xmm0_24 == 0f ? 1 : 0) << 6
                                    | (is_unordered.d(xmm0_24, 0f) ? 1 : 0) << 2
                                    | (xmm0_24 < 0f ? 1 : 0)
                                bool p_4 = unimplemented  {test ah, 0x44}
                                
                                if (p_4)
                                    int32_t eax_11
                                    
                                    if (esi_3[0x4f] s> *esi_3)
                                        eax_11 = esi_3[0x50]
                                    
                                    if (esi_3[0x4f] s<= *esi_3 || eax_11 == 0)
                                        sub_69b330(&arg_128, i_1, var_4, arg1, &arg_128)
                                    else
                                        eax_11(&arg_128, edi_2, esi_3)
                        
                        sub_699030(&arg_1e8)
                    else
                        void arg_8
                        int128_t* eax_4 = sub_698fb0(&arg_8, edx_4, &arg_1e8, &arg_8)
                        int128_t arg_188 = *eax_4
                        int128_t arg_198 = eax_4[1]
                        int128_t arg_1a8 = eax_4[2]
                        int128_t arg_1b8 = eax_4[3]
                        int128_t arg_1c8 = eax_4[4]
                        int128_t arg_1d8 = eax_4[5]
                        void arg_68
                        int128_t* eax_6 = sub_699790(&arg_68, esi_3, edi_2, &arg_68, &arg_188)
                        int32_t edx_6 = arg_1ae8 * 0x64
                        arg_1ae8 += 1
                        *(&arg_1e8 + edx_6) = *eax_6
                        *(&arg_1f8 + edx_6) = eax_6[1]
                        *(&arg_208 + edx_6) = eax_6[2]
                        *(&arg_218 + edx_6) = eax_6[3]
                        *(&arg_228 + edx_6) = eax_6[4]
                        int128_t xmm0_18 = eax_6[5]
                        (&arg_248)[arg_1ae8 * 0x19] = *(edi_2 + 0x68)
                        *(&arg_238 + edx_6) = xmm0_18
                    
                    edx_2 = arg_4
                    i = i_1 + 1
                    esi_2 = var_4
                    ecx_3 = var_8_1 + 0x178
                    i_1 = i
                    var_8_1 = ecx_3
                while (i s< edx_2[2])
            
            CookieCheckFunction(i)
            return i
        
        var_1c_1 = "UIDefGet"
        var_20_1 = 0x127
        var_24_2 = "C:\x\ax2017\Engine\UIDef.cpp"
        ecx_1 = "ptr->assetType == ASSET_TYPE_UI"
else
    var_1c_1 = "DataArray<struct UIState>::DataArrayGet"
    var_20_1 = 0x6c
    ecx_1 = "id != DATAID_NULL"
    var_24_2 = "C:\x\ax2017\Engine\DataArray.h"

sub_63b870(i, &data_801800, ecx_1, var_24_2, var_20_1, var_1c_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
