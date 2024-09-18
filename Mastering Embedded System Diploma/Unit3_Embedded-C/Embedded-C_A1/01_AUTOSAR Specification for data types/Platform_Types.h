/******************************************************************************
 *
 * Module: Common - Platform Abstraction
 *
 * File Name: Platform_Types.h
 *
 * Description: AUTOSAR-Specification of Platform Types
 *
 * Author: Farouk Hashem
 *
 *******************************************************************************/

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

/******************************************************************************
 *                               Symbol definitions							  *
 ******************************************************************************/

/*CPU register type width*/
#define CPU_TYPE_8                  (8U)        /*Indicating a 8 bit processor*/
#define CPU_TYPE_16                 (16U)       /*Indicating a 16 bit processor*/
#define CPU_TYPE_32                 (32U)		/*Indicating a 32 bit processor*/
#define CPU_TYPE_64                 (64U)		/*Indicating a 64 bit processor*/

/*Bit order definition*/
#define MSB_FIRST                   (0u)        /* Big endian bit ordering        */
#define LSB_FIRST                   (1u)        /* Little endian bit ordering     */

/*Byte order definition*/
#define HIGH_BYTE_FIRST             (0u)        /* Big endian byte ordering       */
#define LOW_BYTE_FIRST              (1u)        /* Little endian byte ordering    */

/*Boolean Values*/
#ifndef FALSE
#define FALSE       				(0u)
#endif
#ifndef TRUE
#define TRUE    				    (1u)
#endif

/******************************************************************************
 *                               Type definition							  *
 ******************************************************************************/

typedef unsigned char         	boolean;

typedef unsigned char			uint8;
typedef unsigned short			uint16;
typedef unsigned int			uint32;
typedef unsigned long long		uint64;
typedef signed char				sint8;
typedef signed short			sint16;
typedef signed int				sint32;
typedef signed long long		sint64;

typedef uint8					uint8_least;
typedef uint16					uint16_least;
typedef uint32					uint32_least;
typedef sint8					sint8_least;
typedef sint16					sint16_least;
typedef sint32					sint32_least;

typedef	float					float32;
typedef	double					float64;


#endif /* PLATFORM_TYPES_H_ */
