
#ifndef _GENERIC_DEVICE_H_
#define _GENERIC_DEVICE_H_

// samd21 devices
#if   defined(__SAMD21E17D__) || defined(__ATSAMD21E17D__)
  #include "device/samd21d/samd21e17d.h"
#elif defined(__SAMD21E17DU__) || defined(__ATSAMD21E17DU__)
  #include "device/samd21d/samd21e17du.h"
#elif defined(__SAMD21E17L__) || defined(__ATSAMD21E17L__)
  #include "device/samd21d/samd21e17l.h"
#elif defined(__SAMD21G17D__) || defined(__ATSAMD21G17D__)
  #include "device/samd21d/samd21g17d.h"
#elif defined(__SAMD21G17L__) || defined(__ATSAMD21G17L__)
  #include "device/samd21d/samd21g17l.h"
#elif defined(__SAMD21J17D__) || defined(__ATSAMD21J17D__)
  #include "device/samd21d/samd21j17d.h"
// saml21 devices
#elif defined(__SAML21E15B__) || defined(__ATSAML21E15B__)
  #include "device/saml21b/saml21e15b.h"
#elif defined(__SAML21E16B__) || defined(__ATSAML21E16B__)
  #include "device/saml21b/saml21e16b.h"
#elif defined(__SAML21E17B__) || defined(__ATSAML21E17B__)
  #include "device/saml21b/saml21e17b.h"
#elif defined(__SAML21E18B__) || defined(__ATSAML21E18B__)
  #include "device/saml21b/saml21e18b.h"
#elif defined(__SAML21G16B__) || defined(__ATSAML21G16B__)
  #include "device/saml21b/saml21g16b.h"
#elif defined(__SAML21G17B__) || defined(__ATSAML21G17B__)
  #include "device/saml21b/saml21g17b.h"
#elif defined(__SAML21G18B__) || defined(__ATSAML21G18B__)
  #include "device/saml21b/saml21g18b.h"
#elif defined(__SAML21J16B__) || defined(__ATSAML21J16B__)
  #include "device/saml21b/saml21j16b.h"
#elif defined(__SAML21J17B__) || defined(__ATSAML21J17B__)
  #include "device/saml21b/saml21j17b.h"
#elif defined(__SAML21J17BU__) || defined(__ATSAML21J17BU__)
  #include "device/saml21b/saml21j17bu.h"
#elif defined(__SAML21J18B__) || defined(__ATSAML21J18B__)
  #include "device/saml21b/saml21j18b.h"
#elif defined(__SAML21J18BU__) || defined(__ATSAML21J18BU__)
  #include "device/saml21b/saml21j18bu.h"
// samd51 devices
#elif defined(__SAMD51G18A__) || defined(__ATSAMD51G18A__)
  #include "device/samd51a/samd51g18a.h"
#elif defined(__SAMD51G19A__) || defined(__ATSAMD51G19A__)
  #include "device/samd51a/samd51g19a.h"
#elif defined(__SAMD51J18A__) || defined(__ATSAMD51J18A__)
  #include "device/samd51a/samd51j18a.h"
#elif defined(__SAMD51J19A__) || defined(__ATSAMD51J19A__)
  #include "device/samd51a/samd51j19a.h"
#elif defined(__SAMD51J19B__) || defined(__ATSAMD51J19B__)
  #include "device/samd51a/samd51j19b.h"
#elif defined(__SAMD51J20A__) || defined(__ATSAMD51J20A__)
  #include "device/samd51a/samd51j20a.h"
#elif defined(__SAMD51J20CU__) || defined(__ATSAMD51J20CU__)
  #include "device/samd51a/samd51j20cu.h"
#elif defined(__SAMD51N19A__) || defined(__ATSAMD51N19A__)
  #include "device/samd51a/samd51n19a.h"
#elif defined(__SAMD51N20A__) || defined(__ATSAMD51N20A__)
  #include "device/samd51a/samd51n20a.h"
#elif defined(__SAMD51P19A__) || defined(__ATSAMD51P19A__)
  #include "device/samd51a/samd51p19a.h"
#elif defined(__SAMD51P20A__) || defined(__ATSAMD51P20A__)
  #include "device/samd51a/samd51p20a.h"
#else
  #error Library does not support the specified device.
#endif

#endif /* _GENERIC_DEVICE_H_ */
