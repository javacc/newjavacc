/* Generated By:JJTree: Do not edit this line. ASTIdentifier.h Version 8.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=MyNode,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#ifndef JAVACC_ASTIdentifier_H
#define JAVACC_ASTIdentifier_H

#include "Node.h"


class ASTIdentifier : public Node {
public: 
  ASTIdentifier(int id);
  virtual ~ASTIdentifier();

  /** Accept the visitor. **/
  virtual void jjtAccept(EcmaScriptVisitor *visitor, void * data) const ;
  
  void setName(const JJString& name) { }
};


#endif
/* JavaCC - OriginalChecksum=4b615b1e353a49dd2064feef76977912 (do not edit this line) */