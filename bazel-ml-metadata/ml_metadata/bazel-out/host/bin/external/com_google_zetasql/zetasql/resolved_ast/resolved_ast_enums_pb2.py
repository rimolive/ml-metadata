# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: zetasql/resolved_ast/resolved_ast_enums.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n-zetasql/resolved_ast/resolved_ast_enums.proto\x12\x07zetasql\"r\n\x19ResolvedSubqueryExprEnums\"U\n\x0cSubqueryType\x12\n\n\x06SCALAR\x10\x00\x12\t\n\x05\x41RRAY\x10\x01\x12\n\n\x06\x45XISTS\x10\x02\x12\x06\n\x02IN\x10\x03\x12\x0c\n\x08LIKE_ANY\x10\x04\x12\x0c\n\x08LIKE_ALL\x10\x05\"M\n\x15ResolvedJoinScanEnums\"4\n\x08JoinType\x12\t\n\x05INNER\x10\x00\x12\x08\n\x04LEFT\x10\x01\x12\t\n\x05RIGHT\x10\x02\x12\x08\n\x04\x46ULL\x10\x03\"\xa7\x01\n\x1dResolvedSetOperationScanEnums\"\x85\x01\n\x10SetOperationType\x12\r\n\tUNION_ALL\x10\x00\x12\x12\n\x0eUNION_DISTINCT\x10\x01\x12\x11\n\rINTERSECT_ALL\x10\x02\x12\x16\n\x12INTERSECT_DISTINCT\x10\x03\x12\x0e\n\nEXCEPT_ALL\x10\x04\x12\x13\n\x0f\x45XCEPT_DISTINCT\x10\x05\"\\\n\x1aResolvedRecursiveScanEnums\">\n\x19RecursiveSetOperationType\x12\r\n\tUNION_ALL\x10\x00\x12\x12\n\x0eUNION_DISTINCT\x10\x01\">\n\x17ResolvedSampleScanEnums\"#\n\nSampleUnit\x12\x08\n\x04ROWS\x10\x00\x12\x0b\n\x07PERCENT\x10\x01\"c\n\x18ResolvedOrderByItemEnums\"G\n\rNullOrderMode\x12\x15\n\x11ORDER_UNSPECIFIED\x10\x00\x12\x0f\n\x0bNULLS_FIRST\x10\x01\x12\x0e\n\nNULLS_LAST\x10\x02\"\xf4\x03\n\x1cResolvedCreateStatementEnums\"_\n\x0b\x43reateScope\x12\x18\n\x14\x43REATE_DEFAULT_SCOPE\x10\x00\x12\x12\n\x0e\x43REATE_PRIVATE\x10\x01\x12\x11\n\rCREATE_PUBLIC\x10\x02\x12\x0f\n\x0b\x43REATE_TEMP\x10\x03\"Q\n\nCreateMode\x12\x12\n\x0e\x43REATE_DEFAULT\x10\x00\x12\x15\n\x11\x43REATE_OR_REPLACE\x10\x01\x12\x18\n\x14\x43REATE_IF_NOT_EXISTS\x10\x02\"_\n\x0bSqlSecurity\x12\x1c\n\x18SQL_SECURITY_UNSPECIFIED\x10\x00\x12\x18\n\x14SQL_SECURITY_DEFINER\x10\x01\x12\x18\n\x14SQL_SECURITY_INVOKER\x10\x02\"\xbe\x01\n\x10\x44\x65terminismLevel\x12\x1b\n\x17\x44\x45TERMINISM_UNSPECIFIED\x10\x00\x12\x1d\n\x19\x44\x45TERMINISM_DETERMINISTIC\x10\x01\x12!\n\x1d\x44\x45TERMINISM_NOT_DETERMINISTIC\x10\x02\x12\x19\n\x15\x44\x45TERMINISM_IMMUTABLE\x10\x03\x12\x16\n\x12\x44\x45TERMINISM_STABLE\x10\x04\x12\x18\n\x14\x44\x45TERMINISM_VOLATILE\x10\x05\"a\n ResolvedGeneratedColumnInfoEnums\"=\n\nStoredMode\x12\x0e\n\nNON_STORED\x10\x00\x12\n\n\x06STORED\x10\x01\x12\x13\n\x0fSTORED_VOLATILE\x10\x02\"Y\n\x15ResolvedDropStmtEnums\"@\n\x08\x44ropMode\x12\x19\n\x15\x44ROP_MODE_UNSPECIFIED\x10\x00\x12\x0c\n\x08RESTRICT\x10\x01\x12\x0b\n\x07\x43\x41SCADE\x10\x02\"h\n\x16ResolvedBeginStmtEnums\"N\n\rReadWriteMode\x12\x14\n\x10MODE_UNSPECIFIED\x10\x00\x12\x12\n\x0eMODE_READ_ONLY\x10\x01\x12\x13\n\x0fMODE_READ_WRITE\x10\x02\"<\n\x18ResolvedWindowFrameEnums\" \n\tFrameUnit\x12\x08\n\x04ROWS\x10\x00\x12\t\n\x05RANGE\x10\x01\"\x9d\x01\n\x1cResolvedWindowFrameExprEnums\"}\n\x0c\x42oundaryType\x12\x17\n\x13UNBOUNDED_PRECEDING\x10\x00\x12\x14\n\x10OFFSET_PRECEDING\x10\x01\x12\x0f\n\x0b\x43URRENT_ROW\x10\x02\x12\x14\n\x10OFFSET_FOLLOWING\x10\x03\x12\x17\n\x13UNBOUNDED_FOLLOWING\x10\x04\"c\n\x17ResolvedInsertStmtEnums\"H\n\nInsertMode\x12\x0c\n\x08OR_ERROR\x10\x00\x12\r\n\tOR_IGNORE\x10\x01\x12\x0e\n\nOR_REPLACE\x10\x02\x12\r\n\tOR_UPDATE\x10\x03\"\x9a\x01\n\x16ResolvedMergeWhenEnums\"N\n\tMatchType\x12\x0b\n\x07MATCHED\x10\x00\x12\x19\n\x15NOT_MATCHED_BY_SOURCE\x10\x01\x12\x19\n\x15NOT_MATCHED_BY_TARGET\x10\x02\"0\n\nActionType\x12\n\n\x06INSERT\x10\x00\x12\n\n\x06UPDATE\x10\x01\x12\n\n\x06\x44\x45LETE\x10\x02\"X\n\x18ResolvedArgumentDefEnums\"<\n\x0c\x41rgumentKind\x12\n\n\x06SCALAR\x10\x00\x12\r\n\tAGGREGATE\x10\x01\x12\x11\n\rNOT_AGGREGATE\x10\x02\"Y\n\x1dResolvedFunctionCallBaseEnums\"8\n\tErrorMode\x12\x16\n\x12\x44\x45\x46\x41ULT_ERROR_MODE\x10\x00\x12\x13\n\x0fSAFE_ERROR_MODE\x10\x01\"\x80\x01\n&ResolvedNonScalarFunctionCallBaseEnums\"V\n\x14NullHandlingModifier\x12\x19\n\x15\x44\x45\x46\x41ULT_NULL_HANDLING\x10\x00\x12\x10\n\x0cIGNORE_NULLS\x10\x01\x12\x11\n\rRESPECT_NULLS\x10\x02\"[\n$ResolvedAggregateHavingModifierEnums\"3\n\x12HavingModifierKind\x12\x0b\n\x07INVALID\x10\x00\x12\x07\n\x03MAX\x10\x01\x12\x07\n\x03MIN\x10\x02\"W\n\x16ResolvedStatementEnums\"=\n\x0cObjectAccess\x12\x08\n\x04NONE\x10\x00\x12\x08\n\x04READ\x10\x01\x12\t\n\x05WRITE\x10\x02\x12\x0e\n\nREAD_WRITE\x10\x03\"w\n\x17ResolvedImportStmtEnums\"\\\n\nImportKind\x12\n\n\x06MODULE\x10\x00\x12\t\n\x05PROTO\x10\x01\x12\x37\n*__ImportKind__switch_must_have_a_default__\x10\xff\xff\xff\xff\xff\xff\xff\xff\xff\x01\"\x99\x01\n\x17ResolvedForeignKeyEnums\"3\n\tMatchMode\x12\n\n\x06SIMPLE\x10\x00\x12\x08\n\x04\x46ULL\x10\x01\x12\x10\n\x0cNOT_DISTINCT\x10\x02\"I\n\x0f\x41\x63tionOperation\x12\r\n\tNO_ACTION\x10\x00\x12\x0c\n\x08RESTRICT\x10\x01\x12\x0b\n\x07\x43\x41SCADE\x10\x02\x12\x0c\n\x08SET_NULL\x10\x03\"T\n\x1cResolvedAuxLoadDataStmtEnums\"4\n\rInsertionMode\x12\x08\n\x04NONE\x10\x00\x12\n\n\x06\x41PPEND\x10\x01\x12\r\n\tOVERWRITE\x10\x02\x42;\n\x1e\x63om.google.zetasql.resolvedastB\x17ZetaSQLResolvedASTEnumsP\x01')

_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, globals())
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'zetasql.resolved_ast.resolved_ast_enums_pb2', globals())
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  DESCRIPTOR._serialized_options = b'\n\036com.google.zetasql.resolvedastB\027ZetaSQLResolvedASTEnumsP\001'
  _RESOLVEDSUBQUERYEXPRENUMS._serialized_start=58
  _RESOLVEDSUBQUERYEXPRENUMS._serialized_end=172
  _RESOLVEDSUBQUERYEXPRENUMS_SUBQUERYTYPE._serialized_start=87
  _RESOLVEDSUBQUERYEXPRENUMS_SUBQUERYTYPE._serialized_end=172
  _RESOLVEDJOINSCANENUMS._serialized_start=174
  _RESOLVEDJOINSCANENUMS._serialized_end=251
  _RESOLVEDJOINSCANENUMS_JOINTYPE._serialized_start=199
  _RESOLVEDJOINSCANENUMS_JOINTYPE._serialized_end=251
  _RESOLVEDSETOPERATIONSCANENUMS._serialized_start=254
  _RESOLVEDSETOPERATIONSCANENUMS._serialized_end=421
  _RESOLVEDSETOPERATIONSCANENUMS_SETOPERATIONTYPE._serialized_start=288
  _RESOLVEDSETOPERATIONSCANENUMS_SETOPERATIONTYPE._serialized_end=421
  _RESOLVEDRECURSIVESCANENUMS._serialized_start=423
  _RESOLVEDRECURSIVESCANENUMS._serialized_end=515
  _RESOLVEDRECURSIVESCANENUMS_RECURSIVESETOPERATIONTYPE._serialized_start=453
  _RESOLVEDRECURSIVESCANENUMS_RECURSIVESETOPERATIONTYPE._serialized_end=515
  _RESOLVEDSAMPLESCANENUMS._serialized_start=517
  _RESOLVEDSAMPLESCANENUMS._serialized_end=579
  _RESOLVEDSAMPLESCANENUMS_SAMPLEUNIT._serialized_start=544
  _RESOLVEDSAMPLESCANENUMS_SAMPLEUNIT._serialized_end=579
  _RESOLVEDORDERBYITEMENUMS._serialized_start=581
  _RESOLVEDORDERBYITEMENUMS._serialized_end=680
  _RESOLVEDORDERBYITEMENUMS_NULLORDERMODE._serialized_start=609
  _RESOLVEDORDERBYITEMENUMS_NULLORDERMODE._serialized_end=680
  _RESOLVEDCREATESTATEMENTENUMS._serialized_start=683
  _RESOLVEDCREATESTATEMENTENUMS._serialized_end=1183
  _RESOLVEDCREATESTATEMENTENUMS_CREATESCOPE._serialized_start=715
  _RESOLVEDCREATESTATEMENTENUMS_CREATESCOPE._serialized_end=810
  _RESOLVEDCREATESTATEMENTENUMS_CREATEMODE._serialized_start=812
  _RESOLVEDCREATESTATEMENTENUMS_CREATEMODE._serialized_end=893
  _RESOLVEDCREATESTATEMENTENUMS_SQLSECURITY._serialized_start=895
  _RESOLVEDCREATESTATEMENTENUMS_SQLSECURITY._serialized_end=990
  _RESOLVEDCREATESTATEMENTENUMS_DETERMINISMLEVEL._serialized_start=993
  _RESOLVEDCREATESTATEMENTENUMS_DETERMINISMLEVEL._serialized_end=1183
  _RESOLVEDGENERATEDCOLUMNINFOENUMS._serialized_start=1185
  _RESOLVEDGENERATEDCOLUMNINFOENUMS._serialized_end=1282
  _RESOLVEDGENERATEDCOLUMNINFOENUMS_STOREDMODE._serialized_start=1221
  _RESOLVEDGENERATEDCOLUMNINFOENUMS_STOREDMODE._serialized_end=1282
  _RESOLVEDDROPSTMTENUMS._serialized_start=1284
  _RESOLVEDDROPSTMTENUMS._serialized_end=1373
  _RESOLVEDDROPSTMTENUMS_DROPMODE._serialized_start=1309
  _RESOLVEDDROPSTMTENUMS_DROPMODE._serialized_end=1373
  _RESOLVEDBEGINSTMTENUMS._serialized_start=1375
  _RESOLVEDBEGINSTMTENUMS._serialized_end=1479
  _RESOLVEDBEGINSTMTENUMS_READWRITEMODE._serialized_start=1401
  _RESOLVEDBEGINSTMTENUMS_READWRITEMODE._serialized_end=1479
  _RESOLVEDWINDOWFRAMEENUMS._serialized_start=1481
  _RESOLVEDWINDOWFRAMEENUMS._serialized_end=1541
  _RESOLVEDWINDOWFRAMEENUMS_FRAMEUNIT._serialized_start=1509
  _RESOLVEDWINDOWFRAMEENUMS_FRAMEUNIT._serialized_end=1541
  _RESOLVEDWINDOWFRAMEEXPRENUMS._serialized_start=1544
  _RESOLVEDWINDOWFRAMEEXPRENUMS._serialized_end=1701
  _RESOLVEDWINDOWFRAMEEXPRENUMS_BOUNDARYTYPE._serialized_start=1576
  _RESOLVEDWINDOWFRAMEEXPRENUMS_BOUNDARYTYPE._serialized_end=1701
  _RESOLVEDINSERTSTMTENUMS._serialized_start=1703
  _RESOLVEDINSERTSTMTENUMS._serialized_end=1802
  _RESOLVEDINSERTSTMTENUMS_INSERTMODE._serialized_start=1730
  _RESOLVEDINSERTSTMTENUMS_INSERTMODE._serialized_end=1802
  _RESOLVEDMERGEWHENENUMS._serialized_start=1805
  _RESOLVEDMERGEWHENENUMS._serialized_end=1959
  _RESOLVEDMERGEWHENENUMS_MATCHTYPE._serialized_start=1831
  _RESOLVEDMERGEWHENENUMS_MATCHTYPE._serialized_end=1909
  _RESOLVEDMERGEWHENENUMS_ACTIONTYPE._serialized_start=1911
  _RESOLVEDMERGEWHENENUMS_ACTIONTYPE._serialized_end=1959
  _RESOLVEDARGUMENTDEFENUMS._serialized_start=1961
  _RESOLVEDARGUMENTDEFENUMS._serialized_end=2049
  _RESOLVEDARGUMENTDEFENUMS_ARGUMENTKIND._serialized_start=1989
  _RESOLVEDARGUMENTDEFENUMS_ARGUMENTKIND._serialized_end=2049
  _RESOLVEDFUNCTIONCALLBASEENUMS._serialized_start=2051
  _RESOLVEDFUNCTIONCALLBASEENUMS._serialized_end=2140
  _RESOLVEDFUNCTIONCALLBASEENUMS_ERRORMODE._serialized_start=2084
  _RESOLVEDFUNCTIONCALLBASEENUMS_ERRORMODE._serialized_end=2140
  _RESOLVEDNONSCALARFUNCTIONCALLBASEENUMS._serialized_start=2143
  _RESOLVEDNONSCALARFUNCTIONCALLBASEENUMS._serialized_end=2271
  _RESOLVEDNONSCALARFUNCTIONCALLBASEENUMS_NULLHANDLINGMODIFIER._serialized_start=2185
  _RESOLVEDNONSCALARFUNCTIONCALLBASEENUMS_NULLHANDLINGMODIFIER._serialized_end=2271
  _RESOLVEDAGGREGATEHAVINGMODIFIERENUMS._serialized_start=2273
  _RESOLVEDAGGREGATEHAVINGMODIFIERENUMS._serialized_end=2364
  _RESOLVEDAGGREGATEHAVINGMODIFIERENUMS_HAVINGMODIFIERKIND._serialized_start=2313
  _RESOLVEDAGGREGATEHAVINGMODIFIERENUMS_HAVINGMODIFIERKIND._serialized_end=2364
  _RESOLVEDSTATEMENTENUMS._serialized_start=2366
  _RESOLVEDSTATEMENTENUMS._serialized_end=2453
  _RESOLVEDSTATEMENTENUMS_OBJECTACCESS._serialized_start=2392
  _RESOLVEDSTATEMENTENUMS_OBJECTACCESS._serialized_end=2453
  _RESOLVEDIMPORTSTMTENUMS._serialized_start=2455
  _RESOLVEDIMPORTSTMTENUMS._serialized_end=2574
  _RESOLVEDIMPORTSTMTENUMS_IMPORTKIND._serialized_start=2482
  _RESOLVEDIMPORTSTMTENUMS_IMPORTKIND._serialized_end=2574
  _RESOLVEDFOREIGNKEYENUMS._serialized_start=2577
  _RESOLVEDFOREIGNKEYENUMS._serialized_end=2730
  _RESOLVEDFOREIGNKEYENUMS_MATCHMODE._serialized_start=2604
  _RESOLVEDFOREIGNKEYENUMS_MATCHMODE._serialized_end=2655
  _RESOLVEDFOREIGNKEYENUMS_ACTIONOPERATION._serialized_start=2657
  _RESOLVEDFOREIGNKEYENUMS_ACTIONOPERATION._serialized_end=2730
  _RESOLVEDAUXLOADDATASTMTENUMS._serialized_start=2732
  _RESOLVEDAUXLOADDATASTMTENUMS._serialized_end=2816
  _RESOLVEDAUXLOADDATASTMTENUMS_INSERTIONMODE._serialized_start=2764
  _RESOLVEDAUXLOADDATASTMTENUMS_INSERTIONMODE._serialized_end=2816
# @@protoc_insertion_point(module_scope)
