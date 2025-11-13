// 函数: _Z22XmlWriteAttributeFloatP9XmlWriterPKcf
// 地址: 0x1063e34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
char var_48[0x20]
Xsnprintf(&var_48, 0x20, "%g")
int64_t result = XmlWriteAttributeString(arg1, arg2, &var_48)

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
