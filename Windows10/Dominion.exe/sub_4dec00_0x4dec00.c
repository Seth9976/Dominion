// 函数: sub_4dec00
// 地址: 0x4dec00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x664c)
__security_cookie
int32_t __saved_ebp
void arg_198c
memcpy(&arg_198c, sub_4deeb0(&__saved_ebp), 0x1990)
void arg_331c
memcpy(&__saved_ebp, sub_4deeb0(&arg_331c), 0x1990)
void arg_4cac
memset(&arg_4cac, 0, 0x1990)

for (int32_t i = 0; i s< 0xc80; i += 4)
    void arg_2590
    int32_t ecx_1 = *(&arg_2590 + i)
    
    if (ecx_1 == 0)
        break
    
    void arg_58b0
    *(&arg_58b0 + i) = ecx_1

int32_t edx_3 = 0
int32_t eax_4 = 0
void arg_9c4
int32_t arg_5674[0x80]

while (*(&arg_9c4 + eax_4) != 0)
    edx_3 += 1
    *(&arg_5674 + eax_4) = *(&arg_9c4 + eax_4)
    eax_4 += 0x10
    
    if (eax_4 s>= 0x200)
        break

int32_t i_1 = 0
void arg_235c
void* esi_1 = &arg_235c
void* var_8 = &arg_5674[edx_3 * 4]

do
    int32_t j = *(esi_1 - 8)
    
    if (j == 0)
        break
    
    if (*esi_1 != 0 || *(esi_1 + 4) != 0)
        int32_t eax_8 = 0
        int32_t eax_20
        void* edi_1
        
        if (edx_3 s> 0)
            int32_t (* ecx_2)[0x80] = &arg_5674
            
            while (*ecx_2 != j)
                eax_8 += 1
                ecx_2 = &(*ecx_2)[4]
                
                if (eax_8 s>= edx_3)
                    goto label_4ded20
            
            eax_20 = eax_8 << 4
            edi_1 = &arg_5674[eax_8 * 4]
        
        if (edx_3 s<= 0 || &arg_5674 == neg.d(eax_20))
        label_4ded20:
            void* eax_9 = var_8
            edx_3 += 1
            *eax_9 = *(esi_1 - 8)
            var_8 = eax_9 + 0x10
        else
            int32_t eax_21 = *(edi_1 + 0xc)
            
            if (eax_21 s<= *(esi_1 + 4))
                eax_21 = *(esi_1 + 4)
            
            *(edi_1 + 0xc) = eax_21
    
    i_1 += 1
    esi_1 += 0x10
while (i_1 s< 0x20)

int128_t arg_5874
__builtin_memcpy(&arg_5874, 
    "\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x"
"00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x
        00", 
    0x30)
int32_t eax_11
eax_11.b = arg3 != 1
int32_t arg_58a8 = eax_11 + 1
int32_t eax_13
eax_13.b = arg4 != 1
int32_t arg_58ac = eax_13 + 1
int32_t arg_58a4 = 0
int32_t arg_63b4 = arg8
int32_t arg_63a0 = arg6
int32_t arg_63b8 = arg5
void arg_4f80
void* eax_18 = &arg_4f80
int128_t arg_63a4 = arg7
__builtin_memcpy(&arg_4cac, &__saved_ebp, 0x9c8)
void arg_170c
void arg_63bc
__builtin_memcpy(&arg_63bc, &arg_170c, 0x280)
int32_t ecx_3 = 0x11

while (*eax_18 s>= 0)
    ecx_3 += 1
    eax_18 += 0x10
    
    if (ecx_3 s>= 0x15)
        memcpy(arg1, &arg_4cac, 0x1990)
        CookieCheckFunction(arg1)
        return arg1

sub_63b870(eax_18, &data_801800, "retval.specificKingdom.extraPiles[i].what >= 0", 
    "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp", 0xc52, "DomSetupConfigFromString")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
