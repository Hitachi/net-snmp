/*
 * Note: this file originally auto-generated by mib2c using
 *  $
 */
#ifndef CERTTOTSN_TABLE_H
#define CERTTOTSN_TABLE_H

/*
 * function declarations 
 */
void            init_snmpTlstmCertToTSNTable(void);

/*
 * index definitions for table tlstmCertToTSNTable 
 */

/*
 * column number definitions for table tlstmCertToTSNTable 
 */
#define COL_CERTTOTSN_ID		        1
#define COL_CERTTOTSN_FINGERPRINT		2
#define COL_CERTTOTSN_MAPTYPE		        3
#define COL_CERTTOTSN_DATA		        4
#define COL_CERTTOTSN_STORAGETYPE		5
#define COL_CERTTOTSN_ROWSTATUS		        6

#define CERTTOTSN_TABLE_MIN_COL COL_CERTTOTSN_FINGERPRINT
#define CERTTOTSN_TABLE_MAX_COL COL_CERTTOTSN_ROWSTATUS

#define CERTTOTSN_FINGERPRINT_MAX_SIZE          255
#define CERTTOTSN_MAPTYPE_MAX_SIZE              128
#define CERTTOTSN_DATA_MAX_SIZE	                1024

#define TSNM_tlstmCertSpecified                 1
#define TSNM_tlstmCertSANRFC822Name             2
#define TSNM_tlstmCertSANDNSName                3
#define TSNM_tlstmCertSANIpAddress              4
#define TSNM_tlstmCertSANAny                    5
#define TSNM_tlstmCertCommonName                6
#define TSNM_tlstmCert_MAX                      TSNM_tlstmCertCommonName

#endif                          /* CERTTOTSN_TABLE_H */
