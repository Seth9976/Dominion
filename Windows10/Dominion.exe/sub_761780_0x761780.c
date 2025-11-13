// 函数: sub_761780
// 地址: 0x761780
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t ebx
ebx.b = 0
char var_1d = 0
enum WAIT_EVENT i

for (i = WaitForSingleObject(arg1[5], 0); i != WAIT_OBJECT_0; i = WaitForSingleObject(arg1[5], 0))
    if (ebx.b != 0 || arg1[0xd].b != ebx.b)
        int32_t* ecx_6 = arg1[2]
        arg1[0xd].b = 0
        
        if (ecx_6 != 0)
            (*(*ecx_6 + 0x2c))(ecx_6)
        
        int32_t* ecx_7 = arg1[3]
        
        if (ecx_7 != 0)
            (*(*ecx_7 + 8))(ecx_7)
            arg1[3] = 0
        
        int32_t* ecx_8 = arg1[2]
        
        if (ecx_8 != 0)
            (*(*ecx_8 + 8))(ecx_8)
            arg1[2] = 0
        
        int32_t* ecx_9 = arg1[1]
        
        if (ecx_9 != 0)
            (*(*ecx_9 + 8))(ecx_9)
            arg1[1] = 0
        
        int32_t* eax_15 = *arg1
        uint8_t eax_17 = ((*(*eax_15 + 0x10))(eax_15, 0, 0, &arg1[1]) u>> 0x1f).b
        
        if (eax_17 == 0)
            int32_t* eax_18 = arg1[1]
            eax_17 = ((*(*eax_18 + 0xc))(eax_18, 0x77eaa0, 0x17, 0, &arg1[2]) u>> 0x1f).b
        
        int16_t* pv_1 = nullptr
        int128_t var_1c
        __builtin_memset(&var_1c, 0, 0x12)
        
        if (eax_17 == 0)
            int32_t* eax_20 = arg1[2]
            eax_17 = ((*(*eax_20 + 0x20))(eax_20, &pv_1) u>> 0x1f).b
            
            if (eax_17 == 0)
                int16_t* pv = pv_1
                
                if (*pv != 0xfffe)
                    var_1c = *pv
                    int16_t var_c_1 = pv[8]
                    var_1c:4.d = arg1[0xc]
                else
                    int16_t eax_23 = pv[1]
                    int32_t ecx_13 = arg1[0xc]
                    var_1c:2.w = eax_23
                    int16_t eax_24 = eax_23 * 2
                    var_1c:0xc.w = eax_24
                    var_1c.w = 1
                    var_1c:4.d = ecx_13
                    var_1c:0xe.w = 0x10
                    var_1c:8.d = zx.d(eax_24) * ecx_13
                
                CoTaskMemFree(pv)
                int32_t* eax_28 = arg1[2]
                eax_17 = (
                    (*(*eax_28 + 0xc))(eax_28, 0, 0x40000, arg1[0xa], arg1[0xb], 0, 0, &var_1c, 0)
                    u>> 0x1f).b
        
        arg1[8] = 0
        
        if (eax_17 == 0)
            int32_t* eax_30 = arg1[2]
            eax_17 = ((*(*eax_30 + 0x10))(eax_30, &arg1[8]) u>> 0x1f).b
            
            if (eax_17 == 0)
                int32_t* eax_32 = arg1[2]
                eax_17 = ((*(*eax_32 + 0x38))(eax_32, 0x77eab0, &arg1[3]) u>> 0x1f).b
                
                if (eax_17 == 0)
                    int32_t* eax_34 = arg1[2]
                    eax_17 = ((*(*eax_34 + 0x34))(eax_34, arg1[4]) u>> 0x1f).b
        
        var_1d = 0
        ebx.b = eax_17
    else
        int32_t* eax_2 = arg1[2]
        int32_t var_24 = 0
        ebx = (*(*eax_2 + 0x18))(eax_2, &var_24) u>> 0x1f
        
        if (ebx.b == 0)
            int32_t* eax_4 = arg1[3]
            ebx = arg1[8] - var_24
            int32_t var_28 = 0
            int32_t eax_5 = (*(*eax_4 + 0xc))(eax_4, ebx, &var_28)
            
            if (eax_5 s>= 0)
                sub_75b980(arg1[7], var_28, ebx)
                int32_t* eax_6 = arg1[3]
                eax_5 = (*(*eax_6 + 0x10))(eax_6, ebx, 0)
            
            uint8_t eax_7 = (eax_5 u>> 0x1f).b
            ebx.b = eax_7
            
            if (ebx.b == 0 && var_1d == eax_7)
                int32_t* eax_8 = arg1[2]
                ebx.b = ((*(*eax_8 + 0x28))(eax_8) u>> 0x1f).b
                var_1d = 1
        
        WaitForSingleObject(arg1[4], 0xffffffff)

CookieCheckFunction(i)
return i
