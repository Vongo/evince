#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.ev_previewer"), aligned (8)))
#else
# define SECTION
#endif

static const SECTION union { const guint8 data[836]; const double alignment; void * const ptr;}  ev_previewer_resource_data = { {
  0x47, 0x56, 0x61, 0x72, 0x69, 0x61, 0x6e, 0x74, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x18, 0x00, 0x00, 0x00, 0xe4, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x28, 0x07, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
  0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
  0x04, 0x00, 0x00, 0x00, 0x4b, 0x50, 0x90, 0x0b, 
  0x01, 0x00, 0x00, 0x00, 0xe4, 0x00, 0x00, 0x00, 
  0x04, 0x00, 0x4c, 0x00, 0xe8, 0x00, 0x00, 0x00, 
  0xec, 0x00, 0x00, 0x00, 0xd4, 0xb5, 0x02, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xec, 0x00, 0x00, 0x00, 
  0x01, 0x00, 0x4c, 0x00, 0xf0, 0x00, 0x00, 0x00, 
  0xf4, 0x00, 0x00, 0x00, 0xf9, 0xf4, 0xb7, 0x15, 
  0x06, 0x00, 0x00, 0x00, 0xf4, 0x00, 0x00, 0x00, 
  0x07, 0x00, 0x4c, 0x00, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x01, 0x00, 0x00, 0x2e, 0xf1, 0xfb, 0xf8, 
  0x04, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x03, 0x00, 0x4c, 0x00, 0x04, 0x01, 0x00, 0x00, 
  0x08, 0x01, 0x00, 0x00, 0x61, 0x61, 0x14, 0x4c, 
  0x02, 0x00, 0x00, 0x00, 0x08, 0x01, 0x00, 0x00, 
  0x0a, 0x00, 0x4c, 0x00, 0x14, 0x01, 0x00, 0x00, 
  0x18, 0x01, 0x00, 0x00, 0xa6, 0xdc, 0x24, 0x4e, 
  0x03, 0x00, 0x00, 0x00, 0x18, 0x01, 0x00, 0x00, 
  0x0d, 0x00, 0x76, 0x00, 0x28, 0x01, 0x00, 0x00, 
  0x37, 0x03, 0x00, 0x00, 0xb0, 0xb7, 0x24, 0x30, 
  0x00, 0x00, 0x00, 0x00, 0x37, 0x03, 0x00, 0x00, 
  0x06, 0x00, 0x4c, 0x00, 0x40, 0x03, 0x00, 0x00, 
  0x44, 0x03, 0x00, 0x00, 0x6f, 0x72, 0x67, 0x2f, 
  0x06, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x65, 0x76, 0x69, 0x6e, 
  0x63, 0x65, 0x2f, 0x00, 0x04, 0x00, 0x00, 0x00, 
  0x75, 0x69, 0x2f, 0x00, 0x05, 0x00, 0x00, 0x00, 
  0x70, 0x72, 0x65, 0x76, 0x69, 0x65, 0x77, 0x65, 
  0x72, 0x2f, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
  0x70, 0x72, 0x65, 0x76, 0x69, 0x65, 0x77, 0x65, 
  0x72, 0x2e, 0x78, 0x6d, 0x6c, 0x00, 0x00, 0x00, 
  0x7a, 0x04, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x78, 0xda, 0x85, 0x94, 0xcd, 0x4e, 0xc3, 0x30, 
  0x10, 0x84, 0xef, 0x7d, 0x8a, 0x28, 0x0f, 0xd0, 
  0xc2, 0x3d, 0x4d, 0x85, 0x2a, 0x82, 0x10, 0x2a, 
  0x44, 0x02, 0x51, 0x89, 0x9b, 0x49, 0x57, 0x60, 
  0xc9, 0xf1, 0x06, 0xc7, 0x69, 0xfb, 0xf8, 0xf8, 
  0x8f, 0x26, 0x71, 0x36, 0xe5, 0x98, 0x99, 0xf9, 
  0xc6, 0xeb, 0x1f, 0x25, 0xdb, 0x9c, 0x6b, 0x91, 
  0x1c, 0x41, 0xb5, 0x1c, 0xe5, 0x3a, 0xbd, 0x5d, 
  0xde, 0xa4, 0x9b, 0x7c, 0x91, 0x75, 0x3c, 0xcf, 
  0x34, 0xa2, 0xf8, 0x64, 0x2a, 0x91, 0xac, 0x86, 
  0x75, 0x5a, 0x2a, 0x38, 0x72, 0x38, 0xbd, 0x79, 
  0x31, 0xf5, 0x36, 0xd7, 0x50, 0x07, 0xff, 0x01, 
  0x5d, 0x02, 0xbb, 0xb6, 0x64, 0x5f, 0x90, 0x26, 
  0xac, 0xd2, 0xae, 0x31, 0xd2, 0x57, 0x04, 0xf8, 
  0x0c, 0x67, 0x1d, 0x43, 0x17, 0xcd, 0x00, 0x2d, 
  0x34, 0x4c, 0x31, 0x8d, 0x6a, 0x0a, 0xdb, 0xc8, 
  0x2b, 0x08, 0xa8, 0x8c, 0xdb, 0xe3, 0x23, 0xf5, 
  0x7a, 0xc1, 0xbb, 0xd9, 0x53, 0xc1, 0xf5, 0x9e, 
  0x1f, 0xf4, 0x77, 0x5f, 0x30, 0x52, 0x67, 0xa1, 
  0xf1, 0xcc, 0x43, 0x91, 0x46, 0x3e, 0x10, 0xeb, 
  0x47, 0x39, 0x26, 0x82, 0x36, 0x0f, 0xbc, 0x74, 
  0x7a, 0x4a, 0x58, 0xf1, 0x9f, 0x83, 0xf1, 0xd7, 
  0x55, 0x2a, 0x2e, 0x07, 0xfc, 0x48, 0x35, 0xd0, 
  0x2a, 0xdc, 0x71, 0x9e, 0xb1, 0xaa, 0x32, 0x07, 
  0xe6, 0xca, 0x42, 0x43, 0xc1, 0x05, 0x6c, 0x05, 
  0xb6, 0xb0, 0xe7, 0xf2, 0x80, 0xa7, 0x3b, 0x1b, 
  0xe8, 0x9b, 0x22, 0xd7, 0x96, 0x4d, 0x2b, 0x9a, 
  0x08, 0x6a, 0xe8, 0x98, 0x8c, 0x62, 0x92, 0x8e, 
  0x15, 0x58, 0xf9, 0x47, 0xf4, 0x77, 0xb5, 0xf1, 
  0x48, 0xb1, 0x4f, 0xd7, 0x94, 0xa2, 0x6b, 0x23, 
  0xd2, 0x4a, 0x74, 0x78, 0xc7, 0xe5, 0x24, 0xed, 
  0x34, 0x3a, 0x7e, 0xff, 0xd3, 0xb1, 0x41, 0xd2, 
  0x7f, 0x92, 0xc9, 0xad, 0x56, 0xc2, 0xd9, 0x51, 
  0xf9, 0x45, 0xa7, 0xb1, 0xa7, 0x86, 0x18, 0xdf, 
  0x8b, 0x73, 0x00, 0xb5, 0x85, 0xa0, 0xce, 0x8f, 
  0x46, 0xae, 0xd3, 0x1b, 0xd7, 0x40, 0x6a, 0xbd, 
  0x81, 0xe3, 0x9e, 0x9d, 0xf9, 0xbd, 0x2c, 0x7e, 
  0x01, 0x21, 0xff, 0x95, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x28, 0x75, 0x75, 0x61, 0x79, 0x29, 0x67, 
  0x6e, 0x6f, 0x6d, 0x65, 0x2f, 0x00, 0x00, 0x00, 
  0x02, 0x00, 0x00, 0x00
} };

static GStaticResource static_resource = { ev_previewer_resource_data.data, sizeof (ev_previewer_resource_data.data), NULL, NULL, NULL };
extern GResource *ev_previewer_get_resource (void);
GResource *ev_previewer_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a sane way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER) && (_MSC_VER >= 1500)
/* Visual studio 2008 and later has _Pragma */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined (_MSC_VER)

#define G_HAS_CONSTRUCTORS 1

/* Pre Visual studio 2008 must use #pragma section */
#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (*p)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif


#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(resource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(resource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(resource_destructor)
#endif
G_DEFINE_DESTRUCTOR(resource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void resource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void resource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}
