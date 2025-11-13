// 函数: sub_4fd1d0
// 地址: 0x4fd1d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t edx = __chkstk(0x1924)
__security_cookie
void arg_4
void arg_c8c
__builtin_memcpy(&arg_c8c, sub_562730(&arg_4, edx, 1, &arg_4), 0xc84)
void* result = arg1

if (result != 0)
    void* edi_1 = &arg_c8c
    result = &arg_c8c + (result << 2)
    __return_addr = result
    
    if (&arg_c8c != result)
        do
            void* eax_4 = sub_573400()
            uint32_t esi_2 = zx.d((*edi_1).w)
            void* ebx_1 = *(eax_4 + 4)
            
            if (esi_2 u>= 0x320)
                sub_591930()
            
            int32_t eax_5 = esi_2 * 0x64
            
            if (sub_5754f0(eax_5, *(eax_5 + ebx_1 + 0x1a4c), ebx_1, 4, 0) != 0)
                uint32_t eax_7 = sub_563590(0x102)
                
                if (eax_7 != 0)
                    void* eax_8 = sub_573400()
                    sub_583720(eax_8, *(eax_8 + 0xc), *(eax_8 + 4), eax_7, 0x476, nullptr, 0x476, 
                        0, 0, 4)
            
            void* eax_9 = sub_573400()
            void* ebx_3 = *(eax_9 + 4)
            
            if (esi_2 u>= 0x320)
                eax_9 = sub_591930()
            
            if (sub_5754f0(eax_9, *(eax_5 + ebx_3 + 0x1a4c), ebx_3, 2, 0) != 0)
                uint32_t eax_11 = sub_563590(0x501)
                
                if (eax_11 != 0)
                    void* eax_12 = sub_573400()
                    sub_583720(eax_12, *(eax_12 + 0xc), *(eax_12 + 4), eax_11, 0x476, nullptr, 
                        0x476, 0, 0, 4)
            
            void* ebx_5 = *(sub_573400() + 4)
            
            if (esi_2 u>= 0x320)
                sub_591930()
            
            result = sub_5754f0(eax_5, *(eax_5 + ebx_5 + 0x1a4c), ebx_5, 8, 0)
            
            if (result.b != 0)
                result = sub_563590(0x106)
                
                if (result != 0)
                    void* eax_15 = sub_573400()
                    result = sub_583720(eax_15, *(eax_15 + 0xc), *(eax_15 + 4), result, 0x476, 
                        nullptr, 0x476, 0, 0, 4)
            
            edi_1 += 4
        while (edi_1 != __return_addr)

CookieCheckFunction(result)
return result
