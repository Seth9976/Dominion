// 函数: _Z13XAssertFailedPKcS0_S0_iS0_
// 地址: 0x10621c4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x20 + 0x28)
char var_428[0x400]

if (zx.d(*arg1) == 0)
    Xsnprintf(&var_428, 0x400, "\nassertion failed\n%s\n%s (%s:%d)\n")
else
    Xsnprintf(&var_428, 0x400, "\nassertion failed '%s'\n%s\n%s (%s:%d)\n")

int32_t x0_2 = XDebuggerPresent()
int64_t result = XOutputDebugString(&var_428)

if ((x0_2 & 1) == 0)
    XOutputDebugString("\nStack:\n")
    StackWalkLogCurrentStack()
    FILE* fp = *gXLogFileHandle
    
    if (fp != 0)
        fclose(fp)
    
    uint64_t x8_2 = *gAppInterface
    char* x19_1
    
    if (x8_2 == 0)
        x19_1 = "Assertion"
    else
        x19_1 = *(x8_2 + 0x18)
    
    char var_828[0x400]
    Xsnprintf(&var_828, 0x400, 
        "Oh no! There was an assertion!\n\nThe log.txt file has more information.\n\n%s")
    XMsgBox(x19_1, &var_828)
    result = XExit()

if (*(x20 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
