// 函数: _Z12GLLoadShaderjPKcP6XAsset
// 地址: 0xf8ff74
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
int32_t x0 = glCreateShader()
int32_t x19 = x0

if (x0 == 0)
label_f90210:
    
    if (*(x23 + 0x28) == x8)
        return zx.q(x19)
else
    XString::XString()
    char var_50
    
    if (strstr(arg2, "#define NEED_SKINNING_VERSION") != 0)
        XString::operator+=(&var_50)
    
    if (strstr(arg2, "#define NEED_ANDROID_SAMPLEREXTERNALOES") != 0)
        XString::operator+=(&var_50)
    
    XString::operator+=(&var_50)
    XString::operator+=(&var_50)
    
    if (arg1 == 0x8b31)
        XString::operator+=(&var_50)
    label_f90068:
        
        if (zx.d(*gHaveAdreno420) != 0)
            XString::operator+=(&var_50)
        
        if (VRGetAppType() == 3)
            XString::operator+=(&var_50)
        
        if (VRGetAppType() == 5)
            XString::operator+=(&var_50)
        
        int64_t var_60 = XString::operator char const*()
        char const* var_58_1 = arg2
        XString::operator char const*()
        XFormatString("pre glShaderSource error in %s")
        checkGlErrorFunction("..\..\OpenGLGraphics.cpp", 0x1154, XString::operator char const*())
        XString::~XString()
        glShaderSource(zx.q(x19), 2, &var_60, 0)
        XString::operator char const*()
        XFormatString("glShaderSource error in %s")
        checkGlErrorFunction("..\..\OpenGLGraphics.cpp", 0x1158, XString::operator char const*())
        XString::~XString()
        glCompileShader(zx.q(x19))
        int32_t var_68 = 0
        glGetShaderiv(zx.q(x19), 0x8b81, &var_68)
        
        if (var_68 == 0)
            int32_t var_6c = 0
            glGetShaderiv(zx.q(x19), 0x8b84, &var_6c)
            int64_t x1_11 = sx.q(var_6c)
            
            if (x1_11.d != 0)
                void var_70
                glGetShaderInfoLog(zx.q(x19), x1_11, 0, 
                    &var_70 - ((x1_11 + 0xf) & 0xfffffffffffffff0))
                XString::operator char const*()
                XTrace("Could not compile %s shader %s:\n%s\n")
                glDeleteShader(zx.q(x19))
                x19 = 0
        
        XString::~XString()
        goto label_f90210
    
    if (arg1 == 0x8b30)
        XString::operator+=(&var_50)
        goto label_f90068
    
    pthread_kill(pthread_self(), 6)
    XNoReturn()

__stack_chk_fail()
noreturn
