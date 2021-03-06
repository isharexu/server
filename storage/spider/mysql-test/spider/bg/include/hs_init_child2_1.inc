let $CHILD2_1_HS_DROP_TABLES=
  DROP TABLE IF EXISTS hs_r;
let $CHILD2_1_HS_CREATE_TABLES=
  CREATE TABLE hs_r (
    a INT DEFAULT 10,
    b CHAR(1) DEFAULT 'c',
    c DATETIME DEFAULT '1999-10-10 10:10:10',
    d INT DEFAULT 11,
    PRIMARY KEY(a)
  ) $CHILD2_1_ENGINE $CHILD2_1_CHARSET;
let $CHILD2_1_HS_SELECT_TABLES=
  SELECT a, b, date_format(c, '%Y-%m-%d %H:%i:%s'), d FROM hs_r ORDER BY a;
let $CHILD2_1_HS_DROP_TABLES2=
  DROP TABLE IF EXISTS hs_r2;
let $CHILD2_1_HS_CREATE_TABLES2=
  CREATE TABLE hs_r2 (
    a INT DEFAULT 10,
    b CHAR(1) DEFAULT 'c',
    c DATETIME DEFAULT '1999-10-10 10:10:10',
    d INT DEFAULT 11,
    PRIMARY KEY(a)
  ) $CHILD2_1_ENGINE $CHILD2_1_CHARSET;
let $CHILD2_1_HS_SELECT_TABLES2=
  SELECT a, b, date_format(c, '%Y-%m-%d %H:%i:%s'), d FROM hs_r2 ORDER BY a;
