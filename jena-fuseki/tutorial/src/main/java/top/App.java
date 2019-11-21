package top;

import java.io.InputStream;
import org.apache.jena.rdf.model.Model;
import org.apache.jena.rdf.model.ModelFactory;
import org.apache.jena.rdf.model.Property;
import org.apache.jena.rdf.model.Resource;
import org.apache.jena.rdf.model.RDFNode;
import org.apache.jena.rdf.model.Statement;
import org.apache.jena.rdf.model.StmtIterator;
import org.apache.jena.vocabulary.VCARD;
import org.apache.jena.util.FileManager;

public class App 
{
    public static void example1() {
            String personURI    = "http://somewhere/JohnSmith";
            String fullName     = "John Smith";
            Model model = ModelFactory.createDefaultModel();
            Resource johnSmith = model.createResource(personURI);
            johnSmith.addProperty(VCARD.FN, fullName);
    }

    public static void example2() {
            String personURI    = "http://somewhere/JohnSmith";
            String fullName     = "John Smith";
            Model model = ModelFactory.createDefaultModel();
	    Resource johnSmith = model.createResource(personURI).addProperty(VCARD.FN, fullName);
    }

    public static Model example3() {
	    String personURI    = "http://somewhere/JohnSmith";
	    String givenName    = "John";
	    String familyName   = "Smith";
	    String fullName     = givenName + " " + familyName;
	    Model model = ModelFactory.createDefaultModel();
	    Resource johnSmith
		    = model.createResource(personURI)
		    .addProperty(VCARD.FN, fullName)
		    .addProperty(VCARD.N,
				    model.createResource()
				    .addProperty(VCARD.Given, givenName)
				    .addProperty(VCARD.Family, familyName));
	    return model;
    }

    public static void example4(Model model) {
	    StmtIterator iter = model.listStatements();
	    while (iter.hasNext()) {
		    Statement stmt      = iter.nextStatement();
		    Resource  subject   = stmt.getSubject();
		    Property  predicate = stmt.getPredicate();
		    RDFNode   object    = stmt.getObject();
		    System.out.print(subject.toString());
		    System.out.print(" " + predicate.toString() + " ");
		    if (object instanceof Resource) {
			    System.out.print(object.toString());
		    } else {
			    System.out.print(" \"" + object.toString() + "\"");
		    }
		    System.out.println(" .");
	    } 
    }

    public static void example5(Model model) {
	    model.write(System.out);
    }
    
    public static void example6(Model model) {
	    model.write(System.out, "RDF/XML-ABBREV");
    }

    public static void example7(Model model) {
	    model.write(System.out, "N-TRIPLES");
    }

    public static void example8() {
	    String inputFileName = "vc-db-1.rdf";
	    Model model = ModelFactory.createDefaultModel();
	    InputStream in = FileManager.get().open( inputFileName );
	    if (in == null) {
		    throw new IllegalArgumentException( "File: " + inputFileName + " not found");
	    }
	    model.read(in, null);
	    model.write(System.out);
    }

    public static void example9() {
	    Model m = ModelFactory.createDefaultModel();
	    String nsA = "http://somewhere/else#";
	    String nsB = "http://nowhere/else#";
	    Resource root = m.createResource( nsA + "root" );
	    Property P = m.createProperty( nsA + "P" );
	    Property Q = m.createProperty( nsB + "Q" );
	    Resource x = m.createResource( nsA + "x" );
	    Resource y = m.createResource( nsA + "y" );
	    Resource z = m.createResource( nsA + "z" );
	    m.add( root, P, x ).add( root, P, y ).add( y, Q, z );
	    System.out.println( "# -- no special prefixes defined" );
	    m.write( System.out );
	    System.out.println( "# -- nsA defined" );
	    m.setNsPrefix( "nsA", nsA );
	    m.write( System.out );
	    System.out.println( "# -- nsA and cat defined" );
	    m.setNsPrefix( "cat", nsB );
	    m.write( System.out );
    }

    public static void main(String[] args )
    {
	    example1();
	    example2();
	    Model model = example3();
	    example4(model);
	    example5(model);
	    example6(model);
	    example7(model);
	    example8();
	    example9();
    }
}
