/*******************************************************************************
  SPI Peripheral Library Template Implementation

  File Name:
    spi_TransmitUnderRunStatus_Default.h

  Summary:
    SPI PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : TransmitUnderRunStatus
    and its Variant : Default
    For following APIs :
        PLIB_SPI_TransmitUnderRunStatusGet
        PLIB_SPI_TransmitUnderRunStatusClear
        PLIB_SPI_ExistsTransmitUnderRunStatus

*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/

//DOM-IGNORE-END

#ifndef _SPI_TRANSMITUNDERRUNSTATUS_DEFAULT_H
#define _SPI_TRANSMITUNDERRUNSTATUS_DEFAULT_H

#include "spi_registers.h"

//******************************************************************************
/* Function :  SPI_TransmitUnderRunStatusGet_Default

  Summary:
    Implements Default variant of PLIB_SPI_TransmitUnderRunStatusGet 

  Description:
    This template implements the Default variant of the PLIB_SPI_TransmitUnderRunStatusGet function.
*/

PLIB_TEMPLATE bool SPI_TransmitUnderRunStatusGet_Default( SPI_MODULE_ID index )
{
    spi_registers_t volatile * spi = ((spi_registers_t *)(index));
    return (bool)spi->SPIxSTAT.SPITUR;;
}


//******************************************************************************
/* Function :  SPI_TransmitUnderRunStatusClear_Default

  Summary:
    Implements Default variant of PLIB_SPI_TransmitUnderRunStatusClear 

  Description:
    This template implements the Default variant of the PLIB_SPI_TransmitUnderRunStatusClear function.
*/

PLIB_TEMPLATE void SPI_TransmitUnderRunStatusClear_Default( SPI_MODULE_ID index )
{
    spi_registers_t volatile * spi = ((spi_registers_t *)(index));
    spi->SPIxSTATCLR = SPIxSTAT_SPITUR_MASK;
}


//******************************************************************************
/* Function :  SPI_ExistsTransmitUnderRunStatus_Default

  Summary:
    Implements Default variant of PLIB_SPI_ExistsTransmitUnderRunStatus

  Description:
    This template implements the Default variant of the PLIB_SPI_ExistsTransmitUnderRunStatus function.
*/

#define PLIB_SPI_ExistsTransmitUnderRunStatus PLIB_SPI_ExistsTransmitUnderRunStatus
PLIB_TEMPLATE bool SPI_ExistsTransmitUnderRunStatus_Default( SPI_MODULE_ID index )
{
    return true;
}


#endif /*_SPI_TRANSMITUNDERRUNSTATUS_DEFAULT_H*/

/******************************************************************************
 End of File
*/

