// 函数: _Z17GLGenerateProgramii
// 地址: 0xf8fe78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x22 + 0x28)
int32_t x0 = glCreateProgram()
int32_t x19 = x0

if (x0 != 0)
    glAttachShader(zx.q(x19), zx.q(arg1))
    glAttachShader(zx.q(x19), zx.q(arg2))
    glLinkProgram(zx.q(x19))
    int32_t var_3c = 0
    glGetProgramiv(zx.q(x19), 0x8b82, &var_3c)
    
    if (var_3c != 1)
        int32_t var_40 = 0
        glGetProgramiv(zx.q(x19), 0x8b84, &var_40)
        int64_t x1_2 = sx.q(var_40)
        
        if (x1_2.d != 0)
            glGetProgramInfoLog(zx.q(x19), x1_2, 0, &var_40 - ((x1_2 + 0xf) & 0xfffffffffffffff0))
            XTrace("Could not link program:\n%s\n")
        
        glDeleteProgram(zx.q(x19))
        x19 = 0

if (*(x22 + 0x28) == x8)
    return zx.q(x19)

__stack_chk_fail()
noreturn
