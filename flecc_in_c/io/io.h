/****************************************************************************
**
** Copyright (C) 2014 Stiftung Secure Information and 
**                    Communication Technologies SIC and
**                    Graz University of Technology
** Contact: http://opensource.iaik.tugraz.at
**
** This file is part of <product_name>.
**
** $BEGIN_LICENSE:DEFAULT$
** Commercial License Usage
** Licensees holding valid commercial licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and SIC. For further information
** contact us at http://opensource.iaik.tugraz.at.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
** 
** This software is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this software. If not, see http://www.gnu.org/licenses/.
**
** $END_LICENSE:DEFAULT$
**
****************************************************************************/

#ifndef IO_H_
#define IO_H_

#include "../arch/arch.h"
#include "io_gen.h"

#include "../arch/posix/io/io_posix.h"

#define io_init( default_in, default_out ) io_posix_init( default_in, default_out )
#define io_read_byte() io_posix_read_byte()
#define io_write_byte( byte ) io_posix_write_byte( byte )
#define io_read( buffer, len ) io_gen_readline( buffer, len )
#define io_write( buffer, len ) io_gen_write( buffer, len )

#if( ARCHITECTURE == ARCH_ATMEGA_FOR_GCC )
/* automatically redefines io_init, io_read_byte, and io_write_byte*/
#include "../arch/avr_gcc/io/serial.h"
#endif

#endif /* IO_H_ */