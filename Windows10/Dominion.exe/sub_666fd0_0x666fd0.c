// 函数: sub_666fd0
// 地址: 0x666fd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t var_80c[0x100]
memset(&var_80c, 0, 0x400)
int32_t var_40c[0x101]
memset(&var_40c, 0, 0x400)
int32_t ebx = arg1[2]
int32_t i = 0
int32_t esi = 0

if (ebx != 0)
    void* edi_1 = *arg1
    int32_t (* edx)[0x101] = &var_40c
    
    do
        *edx -= 1
        
        if (esi == arg2)
            uint32_t result = var_80c[i]
            CookieCheckFunction(result)
            return result
        
        int32_t ecx = *(edi_1 + 0x10)
        i += 1
        var_40c[i] = ecx
        edx = &var_40c[i]
        var_80c[i] = edi_1
        
        if (ecx == 0)
            while (i != 0)
                i -= 1
                edx = &var_40c[i]
                
                if (var_40c[i] != 0)
                    break
        
        esi += 1
        edi_1 += 0x18
    while (esi u< ebx)
    
    if (i != 0)
        sub_63b870(i, &data_801800, "indent == 0", "C:\x\ax2017\Engine\UI2.cpp", 0x38dc, 
            "AttribTreeFindParent")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

CookieCheckFunction(0)
return 0
