// 函数: _Z12ModsHasEntryRK7XStringPKcPS_
// 地址: 0xf7779c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x24 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x24 + 0x28)
char s[0x400]
SafeStrcpy(&s, XString::operator char const*(), 0x400)
char* i

for (i = strtok(&s, ","); i != 0; i = strtok(nullptr, ","))
    char* x0_3 = trim(i, 0x20)
    size_t x0_5 = strlen(arg2)
    
    if (strncmp(x0_3, arg2, x0_5) == 0)
        if (strlen(x0_3) != x0_5)
            if (zx.d(x0_3[x0_5]) != 0x3a)
                i = nullptr
                
                if (*(x24 + 0x28) == x8)
                    goto label_f77854
                
                goto label_f778ac
            
            if (arg3 != 0)
                XString::operator=(arg3)
        else
            if (arg3 == 0)
                i = 1
                
                if (*(x24 + 0x28) == x8)
                    goto label_f77854
                
                goto label_f778ac
            
            XString::operator=(arg3)
        
        i = 1
        
        if (*(x24 + 0x28) == x8)
            goto label_f77854
        
        goto label_f778ac

if (*(x24 + 0x28) == x8)
label_f77854:
    return i

label_f778ac:
__stack_chk_fail()
noreturn
