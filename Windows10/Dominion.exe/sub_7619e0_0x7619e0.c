// 函数: sub_7619e0
// 地址: 0x7619e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
CoInitializeEx(nullptr, 0)
void** ppv = operator new(0x40)
memset(ppv, 0, 0x40)
*arg1 = ppv
arg1[3] = sub_7616a0
HANDLE eax_2 = CreateEventA(nullptr, 0, 0, nullptr)
ppv[4] = eax_2

if (eax_2 != 0)
    HANDLE eax_3 = CreateEventA(nullptr, 0, 0, nullptr)
    ppv[5] = eax_3
    
    if (eax_3 != 0 && CoCreateInstance(&data_77eac0, 0, 0x17, &data_77ead0, ppv) s>= 0)
        void*** edx_1 = operator new(0xc)
        
        if (edx_1 == 0)
            edx_1 = nullptr
        else
            *edx_1 = &data_77ea70
            edx_1[1] = ppv
            edx_1[2] = 1
        
        int32_t* eax_6 = *ppv
        ppv[0xe] = edx_1
        (*(*eax_6 + 0x18))(eax_6, edx_1)
        int32_t* ecx_2 = *ppv
        
        if ((*(*ecx_2 + 0x10))(ecx_2, 0, 0, &ppv[1]) s>= 0)
            int32_t* ecx_3 = ppv[1]
            
            if ((*(*ecx_3 + 0xc))(ecx_3, 0x77eaa0, 0x17, 0, &ppv[2]) s>= 0)
                int16_t* pv_1
                __builtin_memset(&pv_1, 0, 0x16)
                int32_t* eax_11 = ppv[2]
                
                if ((*(*eax_11 + 0x20))(eax_11, &pv_1) s>= 0)
                    int16_t* pv = pv_1
                    int128_t var_1c
                    
                    if (*pv != 0xfffe)
                        var_1c = *pv
                        int16_t var_c_1 = pv[8]
                    else
                        int16_t eax_14 = pv[1]
                        var_1c:2.w = eax_14
                        int32_t ecx_5 = *(pv + 4)
                        uint32_t eax_16 = zx.d(eax_14 * 2)
                        var_1c:0xc.w = eax_16.w
                        var_1c.w = 1
                        var_1c:4.d = ecx_5
                        var_1c:0xe.w = 0x10
                        var_1c:8.d = eax_16 * ecx_5
                    
                    CoTaskMemFree(pv)
                    double xmm0_4 =
                        _mm_cvtepi32_pd(zx.q(arg3)) f+ *((arg3 u>> 0x1f << 3) + &data_893660)
                    int32_t eax_20 = var_1c:4.d
                    void invalid
                    int32_t eax_22
                    int32_t edx_2
                    eax_22, edx_2 = __dtol3(invalid, 
                        xmm0_4 / ((_mm_cvtepi32_pd(zx.q(eax_20)) f+
                            *((eax_20 u>> 0x1f << 3) + &data_893660)) * 9.9999999999999995e-08))
                    int32_t* ecx_6 = ppv[2]
                    
                    if ((*(*ecx_6 + 0xc))(ecx_6, 0, 0x40000, eax_22, edx_2, 0, 0, &var_1c, 0) s>= 0)
                        int32_t* eax_24 = ppv[2]
                        ppv[8] = 0
                        
                        if ((*(*eax_24 + 0x10))(eax_24, &ppv[8]) s>= 0)
                            int32_t* ecx_8 = ppv[2]
                            
                            if ((*(*ecx_8 + 0x38))(ecx_8, 0x77eab0, &ppv[3]) s>= 0)
                                int32_t* eax_28 = ppv[2]
                                
                                if ((*(*eax_28 + 0x34))(eax_28, ppv[4]) s>= 0)
                                    ppv[0xa] = eax_22
                                    ppv[0xb] = edx_2
                                    ppv[0xc] = var_1c:4.d
                                    ppv[9] = zx.d(var_1c:2.w)
                                    ppv[7] = arg1
                                    sub_75e950(arg1, var_1c:4.d, zx.d(var_1c:2.w) * ppv[8], arg2, 2)
                                    void** eax_36 = sub_761d00(sub_761780, ppv)
                                    ppv[6] = eax_36
                                    
                                    if (eax_36 != 0)
                                        arg1[0x418] = "WASAPI"
                                        CookieCheckFunction(0)
                                        return 0

CookieCheckFunction(7)
return 7
