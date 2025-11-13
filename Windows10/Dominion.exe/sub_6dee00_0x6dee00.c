// 函数: sub_6dee00
// 地址: 0x6dee00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint32_t result = __security_cookie ^ &__saved_ebp
uint32_t result_1 = result
int32_t edi = arg1[5]

if (arg1[3] != 0)
    uint32_t count = edi * 0x2c
    __alloca_probe_16(count)
    int32_t __saved_edi
    void* ebx_1 = &__saved_edi
    memset(&__saved_edi, 0, count)
    void*** i = arg1[1]
    
    if (i != 0)
        do
            void** eax_3 = *i
            void* ecx_3 = &i[1]
            void*** i_1 = i
            i = *ecx_3
            
            if (sub_6dd960(eax_3) == 0)
                sub_6dd660(arg1, eax_3)
                void* edx_3 = i_1[2]
                int32_t eax_5 = *ecx_3
                
                if (edx_3 == 0)
                    arg1[1] = eax_5
                else
                    *(edx_3 + 4) = eax_5
                
                void* ecx_7 = *ecx_3
                int32_t eax_6 = i_1[2]
                
                if (ecx_7 == 0)
                    arg1[2] = eax_6
                else
                    *(ecx_7 + 8) = eax_6
                
                arg1[3] -= 1
                sub_64c080(i_1, 0xc)
        while (i != 0)
        
        ebx_1 = &__saved_edi
    
    sub_6de590(arg1, ebx_1)
    sub_6de6f0(arg1, ebx_1)
    
    if (sub_6e06e0(arg1) != 0)
        sub_6de6f0(arg1, ebx_1)
    
    result = sub_6debf0(arg1)
else
    int32_t ecx = 0
    
    if (edi s> 0)
        int32_t edx_1 = 0
        char eax_8
        
        while (true)
            if (edx_1 s< 0 || ecx s>= arg1[0x20])
                sub_63b870(result, &data_801800, "index >= 0 && index < mSize", 
                    "C:\x\ax2017\Engine\xArray.h", 0xb5, "XArray<struct Mat4>::operator []")
                eax_8 = sub_63bc30()
                break
            
            ecx += 1
            result = arg1[0x1f] + edx_1
            edx_1 += 0x40
            __builtin_memcpy(result, 
                "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
            "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x
                    3f", 
                0x40)
            
            if (ecx s< edi)
                continue
            
            CookieCheckFunction(result)
            return result
        
        if (eax_8 != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

CookieCheckFunction(result)
return result
